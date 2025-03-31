//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int priorityValue(char c){
    	if(c=='^') return 3;
    	else if(c=='*' || c=='/') return 2;
    	else if(c=='+' || c=='-') return 1;
    	else return -1;
    }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string& s) {
        // Your code here
        stack<char>st;
    	string result="";
    	for(char c : s){
    		if(isalnum(c)){
    			result+=c;
    		}else if(c=='('){
    			st.push(c);
    		}else if(c==')'){
    			while(!st.empty() && st.top()!='('){
    				result+=st.top();
    				st.pop();
    			}
    			st.pop();
    		}else{
    			while(!st.empty() && priorityValue(c) <= priorityValue(st.top())){
    				result+=st.top();
    				st.pop();
    			}
    			st.push(c);
    		}
    	}
    	while(!st.empty()){
    			result+=st.top();
    			st.pop();
    	}
    	return result;
    }
};



//{ Driver Code Starts.
//  Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends