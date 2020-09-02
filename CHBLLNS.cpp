#include <iostream>
using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {
     long long r,g,b,k,ans=0;
     
     cin>>r>>g>>b>>k;
     
     k--;
     
     if(k<=r)
     ans+=k;
     else
     ans+=r;
     
     if(k<=g)
     ans+=k;
     else
     ans+=g;
     
     if(k<=b)
     ans+=k;
     else
     ans+=b;
     
     ans++;
     
 
  cout<<ans;
  cout<<"\n";
}	return 0;
}

