//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*; 

class FastReader{ 
    BufferedReader br; 
    StringTokenizer st; 

    public FastReader(){ 
        br = new BufferedReader(new InputStreamReader(System.in)); 
    } 

    String next(){ 
        while (st == null || !st.hasMoreElements()){ 
            try{ st = new StringTokenizer(br.readLine()); } catch (IOException  e){ e.printStackTrace(); } 
        } 
        return st.nextToken(); 
    } 

    String nextLine(){ 
        String str = ""; 
        try{ str = br.readLine(); } catch (IOException e) { e.printStackTrace(); } 
        return str; 
    } 
    
    Integer nextInt(){
        return Integer.parseInt(next());
    }
}

class GFG{
    public static void main(String args[]) throws IOException { 
        FastReader read = new FastReader();
        int t = read.nextInt();
        PrintWriter out = new PrintWriter(System.out);
        while(t-- > 0){
            int N = read.nextInt();
            int A[]= new int[N];
            for(int i = 0; i < N; i++)
                A[i] = read.nextInt();

            Solution ob = new Solution();
            int ans[] = ob.canMakeTriangle(A, N); 
            for (int i=0;i<ans.length;i++) 
                out.print(ans[i]+" "); 
            out.println();
        
out.println("~");
}
        out.flush();
    } 
} 
// } Driver Code Ends


//User function Template for Java
class Solution 
{ 
    int[] canMakeTriangle(int A[], int N) 
    { 
        // code here
        int[] b=new int[N-2];
        int k=0;
        for(int i=0;i<N-2;i++)
        {
            if((A[i]+A[i+1]>A[i+2]) && (A[i+1]+A[i+2]>A[i]) && (A[i]+A[i+2]>A[i+1]))
            {
                b[k]=1;k++;
            }
            else
            {
                b[k]=0;k++;
            }
            
        }
        return b;
    }
}