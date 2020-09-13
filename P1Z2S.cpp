#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {

 long long int t,n,z;
 
//vector<int> v;
cin>>t;
z=t;
long long int s=0;
 while(t--)
 {
     
     cin>>n;
     s+=n;
 }     
 
  t=ceil(float(s)/2);
  if(t<z)
  t=z;
  
  cout<<t;
  //cout<<"\n";
	return 0;
}

