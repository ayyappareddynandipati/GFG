//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            String s = sc.next();
            Solution obj = new Solution();
            System.out.println(obj.reverseWords(s));
            t--;
        }
    }
}

// } Driver Code Ends



class Solution {
    // Function to reverse words in a given string.
    String reverseWords(String str) {
        // code here
        String[] wordsArray = str.split("\\.");
        List<String> words = new ArrayList<>();
        Collections.addAll(words, wordsArray);
        
        // then reverse the split string list and join using space
        Collections.reverse(words);
        // finally return the joined string
        return String.join(".", words);
    }
}