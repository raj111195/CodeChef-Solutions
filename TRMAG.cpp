#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main() {

 int t,i,x,n,z;
cin>>x;

while(x--)
{
//vector<int> v;
cin>>t;

int pa = (t+1)/2;

double val=double(t*(t+1))/2;

     cin>>n;
     
     for(i=0;i<n;i++)
     {
         cin>>z;
         val-=z;
     }
     
 cin>>t;
 
 
  cout<<fixed<<setprecision(4)<<val*( pa - t)/pa;
  cout<<"\n";
}	return 0;
}

