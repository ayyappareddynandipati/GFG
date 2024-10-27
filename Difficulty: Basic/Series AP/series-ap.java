//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int a1;
            a1 = Integer.parseInt(br.readLine());
            
            
            int a2;
            a2 = Integer.parseInt(br.readLine());
            
            
            int n;
            n = Integer.parseInt(br.readLine());
            
            Solution obj = new Solution();
            int res = obj.nthTermOfAP(a1, a2, n);
            
            System.out.println(res);
            
        
System.out.println("~");
}
    }
}

// } Driver Code Ends



class Solution {
    public static int nthTermOfAP(int a1, int a2, int n) {
        // code here
        int diff=a2-a1;
        int res = (n-2)*diff;
        return res+a2;
    }
}
        
