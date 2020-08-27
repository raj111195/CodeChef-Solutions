#include <iostream>
using namespace std;
 
int main() {
 
 int t,i,x,n,z;
 
 
cin>>t;
 
 while(t--)
 {
     int ans=0;
     
     cin>>n;
     
    
     
     while(n>0)
     { ans+=(n%10); n/=10;}
     
     
  cout<<ans;
  cout<<"\n";
}	return 0;
}
 
