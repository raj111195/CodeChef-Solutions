#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {vector<int> v;
     
     cin>>n;
     
     for(i=0;i<n;i++)
     {
         cin>>z;
         v.push_back(z);
         
     }
     
     cin>>x;
     x=v[x-1];
     
     
     //cout<<"fhkfhf"<<x;
     
     sort(v.begin(),v.end());
     
     
     for(i=0;i<n;i++)
     { if(x==v[i])
       break;}
     
 
  cout<<i+1 ;
  cout<<"\n";
}	return 0;
}

