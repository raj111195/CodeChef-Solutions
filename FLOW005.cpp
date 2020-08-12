#include <iostream>
using namespace std;

int main() {

 int t,x,n;
 
cin>>t;

 while(t--)
 { int ans=0;
     
     cin>>n;
     
     x=n;
     ans+=n/100;
     x=x%100;
     
     n=x;
     ans+=x/50;
     n=n%50;
     
     x=n;
     ans+=n/10;
     x=x%10;
     
      n=x;
     ans+=x/5;
     n=n%5;
     
     
     x=n;
     ans+=n/2;
     x=x%2;
     
     ans+=x;
  cout<<ans ;
  cout<<"\n";
}	return 0;
}

