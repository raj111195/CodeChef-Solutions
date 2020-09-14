#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {

long long t,i,x,n,z,a=LLONG_MIN,b=LLONG_MAX;
 
//vector<int> v;

cin>>x>>t;


     for(i=0;i<x;i++)
     {
         cin>>z;
         
         if(z>a)
         a=z;
         if(z<b)
         b=z;// cout<<"-1";}
         
     }
     
    // cout<<a<<" "<<b<<"\n";
     
 while(t--)
 {
     
     cin>>n;
     
 if(b<=n && n<=a)
  cout<<"Yes";
  else cout<<"No";
  cout<<"\n";
}
/*
while(t--)
{
     cout<<"No--";
  cout<<"\n";

    
}*/

return 0;
}

