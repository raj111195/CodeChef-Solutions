#include <iostream>
using namespace std;

int main() {

 int s,t,i,n,q;
 
cin>>s;

while(s--)
{

cin>>t;

 while(t--)
 {
     
     cin>>i>>n>>q;
     
     
     if(i==1)
     {
         
         if(q==1)
         {if(n%2) 
         cout<<n/2;
         else
         cout<<n-n/2;}
         
         else
         {if(n%2) 
         cout<<n-n/2;
         else
         cout<<n/2;
         }
         
         
     }
     else
     {
          if(q==2)
         {if(n%2) 
         cout<<n/2;
         else
         cout<<n-n/2;}
         
         else
         {if(n%2) 
         cout<<n-n/2;
         else
         cout<<n/2;
         }
         
         
         
         
     }
     
     cout<<"\n";
 }
 
}
  
	return 0;
}

