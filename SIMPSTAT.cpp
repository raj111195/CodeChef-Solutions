#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

 int t;
 long long i,x,n,z;

cin>>t;

 while(t--)
 {
   long double d=0;  
   vector<long long> v;
     cin>>n>>z;
     
     for(i=0;i<n;i++)
     {
         cin>>x;
         v.push_back(x);
         
     }
     
     sort(v.begin(),v.end());
     
     for(i=0+z;i<n-z;i++)
     {d+=v[i];
     }
 
    d/=(n-2*z);
 
  printf("%6llf",d);
  cout<<"\n";
}	return 0;
}

