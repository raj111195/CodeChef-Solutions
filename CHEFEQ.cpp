#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

 int t,i,x,n,z;
 
cin>>t;

 while(t--)
 {
     int j,ma=0;
     cin>>n;
     vector<int> v;

     
     for(i=0;i<n;i++)
     {
         cin>>z;
         v.push_back(z);
         
     }

sort(v.begin(),v.end());     
 
  j=1;
  
     for(i=1;i<n;i++)
     { //cout<<v[i-1];
      if(v[i]==v[i-1])
      j++;
      else
      {
         //cout<<i<<"___"<<j<<"  ";
         ma=max(ma,j);
          j=1;
      }
     }
  
  ma=max(ma,j);
         
  cout<<n-ma;
  cout<<"\n";
}	return 0;
}

