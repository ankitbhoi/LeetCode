//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.math.*;
import java.io.*;
class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();

            System.out.println(ob.NthTerm(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution {
    static BigInteger NthTerm(int N){
        // code here
        BigInteger num1 = BigInteger.valueOf(0);
        BigInteger num2 = BigInteger.valueOf(0);

        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0) {  // when i is even
                if (i == 2) {
                    num2 = BigInteger.valueOf(2);
                } else {
                    num2 = num2.multiply(num2).multiply(num2);
                }
            } else {      // when i is odd
                if (i == 1) {
                    num1 = BigInteger.valueOf(2);
                } else {
                    num1 = num1.multiply(num1);
                }
            }
        }

        if (N % 2 == 0) {  // if N is even
            return num2;
        } else {   // if N is odd
            return num1;
        }
    }
}