#include <iostream>
using namespace std;

int main() {

 int t,i,x,n,z;
 
int a[21];
cin>>t;

a[0]=1;
a[1]=1;

for(i=2;i<21;i++)
a[i]=i*a[i-1];

 while(t--)
 {
     
     cin>>n;
     
  cout<<a[n];
  cout<<"\n";
}	return 0;
}

