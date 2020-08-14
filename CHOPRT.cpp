#include <iostream>
using namespace std;

int main() {

 int t,i,x,n,z;
 
cin>>t;

 while(t--)
 {
     
     cin>>n>>z;
     
     if(n>z)
     cout<<">";
     else if(n<z)
     cout<<"<";
     else cout<<"=";
     
  cout<<"\n";
}	return 0;
}

