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
        
         String[] f = br.readLine().split(" ");
        int N = Integer.parseInt(f[0]);
    int m = Integer.parseInt(f[1]);
        ArrayList<Integer> v = new ArrayList<Integer>();
        
            
        for (int i = 0; i < N; i++) {
            //System.out.println("hello world");
        
        
        String e = br.readLine();
                int d = Integer.parseInt(e);
        
            
        v.add(d);}
        
        
        int ans=0;
        
        Collections.sort(v);
        
        for(int i=1;i<N;i++)
        {
            if(v.get(i)-v.get(i-1) <= m)
            {ans++; i++;}
            else if((i+1) < N)
            {if(v.get(i+1)-v.get(i) <= m)
            {
                ans++; i=i+2;
            }}
            
            
        }
        

        System.out.println(ans);
    }
}
		
	
