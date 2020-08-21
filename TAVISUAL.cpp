#include <iostream>
#include<vector>
using namespace std;

int main() {

 int t,i,x,n,z;
 long int a,b;
 
vector<int> v;
cin>>t;

 while(t--)
 {
     
     cin>>x>>n>>z;
     
     while(z--)
     {
         
         cin>>a>>b;
         
         if(n>=a && n<=b)
         {
             long int r=n-a,t=b-n;
             
             if(r>=t)
             {
                 n=b-r;
             }
             else
             {
                 n=a+t;
             }
             
             
         }
         
         
     }
     
 
  cout<<n;
  cout<<"\n";
}	return 0;
}

