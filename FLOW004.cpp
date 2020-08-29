#include <iostream>
using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {
     int ans=0;
     
     cin>>n;
     
     ans+=(n%10);
     
     while(n>0)
     {z=n; n/=10;}
     
     
  cout<<ans+z;
  cout<<"\n";
}	return 0;
}

