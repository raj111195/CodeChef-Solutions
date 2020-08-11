#include <iostream>
using namespace std;

int main() {

 int w,t,i,x,n,z;
 
cin>>t;

 while(t--)
 {
     
     cin>>n;
     
     for(i=0;i<n;i++)
     cin>>z>>w;
     
     int ans=1;
     for(int j=2;j<=n;j++)
     ans^=j;
 
  cout<<ans;
  cout<<"\n";
}	return 0;
}

