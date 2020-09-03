#include <iostream>
#include<vector>
using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {
  vector<int> v;     
     cin>>n;
     
     for(i=0;i<n;i++)
     {
         cin>>z;
         v.push_back(z);
         
     }
     
     int prod=-1,rat=0,ind=0;
     
     for(i=0;i<n;i++)
     {
         cin>>z;
     
      if(v[i]*z>=prod)
      {
          prod=v[i]*z;
          if(z>rat)
          {rat=z;
          ind=i;}
          
      }
     }
      cout<<ind+1;
  cout<<"\n";
}	return 0;
}

