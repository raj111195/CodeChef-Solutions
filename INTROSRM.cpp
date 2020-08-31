#include <iostream>
using namespace std;

int main() {

 int t,i;
 long long x,n,z;
 

cin>>t;

 while(t--)
 {
     x=0;
     
     cin>>n;
     
     while(n>0)
     { x*=10;
         x+=(n%10);
         n/=10;
     }
 
 
 
 
  cout<<x;
  cout<<"\n";
}	return 0;
}

