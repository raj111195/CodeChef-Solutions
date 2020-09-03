/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String e = br.readLine();
        int N = Integer.parseInt(e);
        for (int i = 0; i < N; i++) {
            
            
            e = br.readLine();
            
            String[] f = br.readLine().split(" ");
            
            
            BigInteger t = new BigInteger("1");
            
            for(int j=0;j<f.length;j++)
            {
               BigInteger c = new BigInteger(f[j]); 
                t=t.multiply(c);
                
                if(t.compareTo(new BigInteger("1000000007")) == 1 )
                t=t.mod(new BigInteger("1000000007"));
                
                
            }
            
            
            
            System.out.println(t);
        }
        

        //System.out.println("Hello World!");
    }
}
		
	
