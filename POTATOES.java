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
        
        int[] d = new int[2500];
        
        d[0]=0;
        d[1]=0;
        d[2]=1;
        d[3]=1;
        
        for(int i=4;i<2500;i+=2)
        {
            d[i]=0;
            
        } 
        
        for(int i=5;i<2500;i+=2)
        { int j;
           for(j=2;j<=i/2;j++)
           {
               if(i%j == 0)
               {d[i]=0; break;}
               
           }
           if(j>i/2) d[i]=1;
        
        }    
        
        for (int i = 0; i < N; i++) {
            String[] f = br.readLine().split(" ");
        int a = Integer.parseInt(f[0]);
            int b = Integer.parseInt(f[1]);
            
            for(int j=a+b;;j++)
            {
                if(d[j+1]==1)
                {System.out.println(j+1-a-b); break;}
                
            }
            
            
        }
        

    }
}
		
	
