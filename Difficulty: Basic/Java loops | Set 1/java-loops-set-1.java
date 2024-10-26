//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- > 0)
        {
            int N = scn.nextInt();

            Solution ob = new Solution();
            ArrayList<Integer> sum = ob.getSum(N);
            System.out.println(sum.get(0)+" "+sum.get(1));
        
System.out.println("~");
}
    }
}

// } Driver Code Ends


//User function Template for Java
class Solution{
    static ArrayList<Integer> getSum(int N){
        // code here
        int esum=0,osum=0;
        ArrayList<Integer> result = new ArrayList<>();
        for(int i=1;i<=N;i++)
        {
            if(i%2==0)
            {
                esum+=i;
            }
            else
            {
                osum+=i;
            }
        }
        result.add(esum);
        result.add(osum);
        return result;
        
    }
}