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
            
            
            ArrayList<Integer> v = new ArrayList<Integer>();
            e = br.readLine(); 
            
            
            String[] f = br.readLine().split(" ");
         for (int j = 0; j < f.length; j++) 
            { int d = Integer.parseInt(f[j]);
             v.add(d);
            }
            
            Collections.sort(v);
         
         int ans=0;
         
         for (int j = f.length-1;j>=0; j--) 
            { 
                if((j-1)>=0)
                {ans+=v.get(j)+v.get(j-1);} 
                else ans+=v.get(j);
              
              j-=3;
            } 
            
            
            
            
        System.out.println(ans);        
           
        }
        

        //System.out.println();
    }
}
		
	
