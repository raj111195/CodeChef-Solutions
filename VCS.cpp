#include <iostream>
#include<set>
using namespace std;

int main() {

 int t,i,x,y,n,z,a=0,b=0;
 set<int> s1,s2;
 
 
cin>>t;

 while(t--)
 {
     
     cin>>n>>x>>y;
     
     for(i=0;i<x;i++)
     {
         cin>>z;
         s1.insert(z);
     }
     for(i=0;i<y;i++)
     {
         cin>>z;
         s2.insert(z);
     }
     
     for(i=1;i<=n;i++)
     {
         if(s1.find(i)!=s1.end() && s2.find(i)!=s2.end())
         {//cout<<"\n"<<i<<"\n"; 
         a++;}
         else if(s1.find(i)==s1.end() && s2.find(i)==s2.end())
         {//cout<<"\n"<<i<<"\n"; 
         b++;}
     }     
     
 
  cout<<a<<" "<<b;
  cout<<"\n";
  s1.clear(); s2.clear(); a=0;b=0;
}	return 0;
}

