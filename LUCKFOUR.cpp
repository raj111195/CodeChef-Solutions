#include <iostream>
using namespace std;

int main() {

 int t,i,x;
 
 string n;
 

cin>>t;

 while(t--)
 {
     
     cin>>n;
     int ans=0;
     
     for(i=0;i<n.length();i++)
     {
         if(n[i]=='4')
         ans++;
     }
     
 
  cout<<ans ;
  cout<<"\n";
}	return 0;
}

