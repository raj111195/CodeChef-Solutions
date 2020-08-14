#include <iostream>
#include<vector>
using namespace std;

int main() {

 int t,i,x;
 
 long long n,z;
 
 vector<long long> v;
cin>>t;

 while(t--)
 {
     
     cin>>n;
     
     for(i=0;i<n;i++)
     {cin>>z;
     v.push_back(z);
     }
     
    long long g=100001;     
     
     for(i=0;i<n;i++)
     {if(g>v[i])
      g=v[i];}
     
     cout<<g*(v.size()-1); 
     
 
 cout<<"\n"; v.clear(); 
}	return 0;
}

