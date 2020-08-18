#include <iostream>
#include<vector>
using namespace std;

int main() {

 int t,i;
 
//vector<int> v;
cin>>t;
 while(t--)
 {
     string a,b,ans="";

     
     cin>>a>>b;
     
     for(i=0;i<a.size();i++)
     {
         if(a[i]=='B' && b[i]=='B')
         ans+="W";
         else 
         ans+="B";
     }
     
 
  cout<<ans;
  cout<<"\n";
}	return 0;
}

