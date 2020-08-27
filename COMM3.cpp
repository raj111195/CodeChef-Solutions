#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {

 int t,i,x,n,z;
 
vector<int> v,s;
cin>>t;

 while(t--)
 {
     
     cin>>n;
     
     for(i=0;i<3;i++)
     {
         cin>>x>>z;
         s.push_back(x);
         v.push_back(z);
         
     }
     int a=0,b=0,c=0;
     
     float g = sqrt( (s[0]-s[1])*(s[0]-s[1]) + (v[0]-v[1])*(v[0]-v[1]) );
     float h = sqrt( (s[0]-s[2])*(s[0]-s[2]) + (v[0]-v[2])*(v[0]-v[2]) );
     float i = sqrt( (s[2]-s[1])*(s[2]-s[1]) + (v[2]-v[1])*(v[2]-v[1]) );
     
     //cout<<g<<" "<<h<<" "<<i<<" ";
 
   if(g<=float(n))a=1;
   if(h<=float(n))b=1;
   if(i<=float(n))c=1;
   
   if(a==0 && b && c )
   a=1;
    if(b==0 && a && c )
   b=1;
    if(c==0 && a && b )
   c=1;
   
   
   if(a && b && c)
   cout<<"yes";
   else 
   cout<<"no";
   
   v.clear(); s.clear();
   
  cout<<"\n";
}	return 0;
}

