/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String e = br.readLine();
        int N = Integer.parseInt(e);
        for (int i = 0; i < N; i++) {
           // System.out.println("hello world");
        
        
        
        e = br.readLine();
        int d = Integer.parseInt(e);
        
        ArrayList<Integer> v = new ArrayList<Integer>();
        
        String[] f = br.readLine().split(" ");
        
        
        for(int k=0;k<f.length;k++)
        {int g = Integer.parseInt(f[k]);
                v.add(g);}
            
        int m=-1;
        for(int k=f.length-1;k>=0;k--)
        {
            if(m<v.get(k))
            m=v.get(k);
            else
            m++;
            
        }
                
     
                System.out.println(m);
        }
    }
}
		
	
