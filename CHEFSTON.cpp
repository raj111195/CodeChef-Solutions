#include <iostream>
#include<vector>
using namespace std;

int main() {

 long long int t;//,i,x,n,z,max=0;
 
cin>>t;

 while(t--)
 {
 long long int i,x,n,z,max=0;
     
vector<long long int> v;
     cin>>n>>x;
     
     for(i=0;i<n;i++)
     {
         cin>>z;
         v.push_back(x/z);
         
     }
     for(i=0;i<n;i++)
     {
         cin>>z;
     
     if(v[i]*z>max)
     max=v[i]*z;
     
         
     }
     
  cout<<max;
  cout<<"\n";
}

return 0;
}

