#include <iostream>
#include<math.h>
using namespace std;

int main() {

 int t,i,x,n,z;
 
cin>>t;

 while(t--)
 {
     
     cin>>n>>z;
     
    
  cout<< sqrt (z*z - n*n) <<" "<<sqrt (z*z + n*n);
  cout<<"\n";
}	return 0;
}

