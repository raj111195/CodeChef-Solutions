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
	
	String a = br.readLine();
	Integer n = Integer.parseInt(a);
	
	
	
	for(int i=0;i<n;i++)
	{
	    	a = br.readLine();
	        Integer k = Integer.parseInt(a);
	        
	        BigInteger v = new BigInteger("0");
	
	    
	    String r="";
	    
	    for(int j=0;j<k;j++)
	   {  r+="7";
	   
	    BigInteger s = new BigInteger(r);
	    
	    v=v.add(s);
	    
	    //	System.out.println(s);
	    if(v.compareTo(new BigInteger("1000000007")) == 1 )
	    v = v.mod(new BigInteger("1000000007"));
	    
	}
	
	
	System.out.println(v);
	
		// your code goes here
	}
}
}

