#include <iostream>
using namespace std;

int main() {

 long long t,i,x,n;
 
cin>>t;

 while(t--)
 {
     cin>>n>>x;
     
    // cout<<n<<" "<<x;
     
     long long z;
     z= (n>=x)?n:x;
  
  cout<<z<<" "<<n+x;
  
  cout<<"\n";
}	return 0;
}

