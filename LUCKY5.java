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
            
            BigInteger c = new BigInteger("0");
            
            for( int j=0;j<e.length();j++)
     {
         if(e.charAt(j)!='4' &&  e.charAt(j)!='7')
         c = c.add(new BigInteger("1"));
     }
     
            System.out.println(c);
        }
        

       
    }
}
		
	
