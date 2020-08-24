#include <iostream>
using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {
     
     int c[1001];
     
     for(i=0;i<1001;i++)
     { c[i]=1; }
     
         
     cin>>n>>z;
     
     for(i=0;i<z;i++)
     {
         cin>>x;
         c[x]=0;
     }
     
     int decider=1;
     
    for(i=1;i<=n;i++)
     {
       if(!c[i]) continue;
       
       if(decider>0)
       c[i]=5;
       else
       c[i]=10;
       
       decider*=-1;  
 
     }
 
 
 for(i=1;i<=n;i++)
     {
  if(c[i]==5)cout<<i<<" ";
     }
  cout<<"\n";
  
  for(i=1;i<=n;i++)
     {
  if(c[i]==10)cout<<i<<" ";
     }
  cout<<"\n";
  
  
  
  
}	return 0;
}

