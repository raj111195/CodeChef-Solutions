#include <iostream>
#include<vector>
#include<climits>
#include<numeric>
using namespace std;

int main() {

 int t,i,x,n,z;
 
cin>>t;

 while(t--)
 {
     
     cin>>n;
     long long int ans,z,m=LLONG_MAX;
     vector<long long int> v;

     for(i=0;i<n;i++)
     {
         cin>>z;
         
         if(z<m)
         m=z;
         
         v.push_back(z);
         
     }
     
     ans=accumulate(v.begin(),v.end(),0);
 //cout<<ans;
 if(m==1)
   cout<<"-1";
   else 
   cout<<(ans-m+2);
   
  cout<<"\n";
}	return 0;
}


