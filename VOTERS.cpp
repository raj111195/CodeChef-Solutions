#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

 int t,i,x,n,z,m;
 
vector<int> v,s(1,-1);

     
     cin>>x>>n>>m;
     
     for(i=0;i<x+n+m;i++)
     {
         cin>>z;
         v.push_back(z);
         
     }
     
     sort(v.begin(),v.end());
     
     
      for(i=1;i<x+n+m;i++)
      if(v[i]==v[i-1] && v[i]!=s[s.size()-1])
      s.push_back(v[i]);              
 
cout<<s.size()-1<<"\n";

  for(i=1;i<s.size();i++)
  cout<<s[i]<<"\n";

  return 0;
}

