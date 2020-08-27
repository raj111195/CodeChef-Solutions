#include <iostream>
#include<vector>
using namespace std;

int main() {

 int t,i,x,z;
 
vector<string> v;
cin>>t;

 while(t--)
 {
     string n;
     
     cin>>n;
     for(i=0;i<n.size();i++)
     {
      if(n[i]==')')
      {
         string a = v[v.size()-1];
         v.pop_back();
         string b = v[v.size()-1];
         v.pop_back();
         string c = v[v.size()-1];
         v.pop_back();
         
         v.pop_back();
         
         v.push_back(c+a+b);
      }
      else {
          string r=" ";
          r[0]=n[i];
          v.push_back(r);}
     
     }
 
 //for(i=0;i<v.size();i++)
 //    {cout<<v[i]<<" ";}
 
  cout<<v[0];
  cout<<"\n";  v.clear();
}	return 0;
}

