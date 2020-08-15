#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

 int t,i,x,n,z;
 
vector<int> v;
cin>>t;

 while(t--)
 {
     
     cin>>n;
     
     for(i=0;i<n;i++)
     {
         cin>>z;
         v.push_back(z);
         
     }
     
     
     sort(v.begin(),v.end());
     
 
  cout<<v[0]+v[1];
  cout<<"\n"; v.clear();
}	return 0;
}

