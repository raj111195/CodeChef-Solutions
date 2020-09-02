#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {

 int t,i,m,x,n,z;
 
vector<pair<string,string> > v;

cin>>t>>m;

string k,l;

 while(t--)
 {
     cin>>k>>l;
         v.push_back(make_pair(l,k));
 }
 
 while(m--)
 {
     
     cin>>k;
     
     for(i=0;i<v.size();i++)
     if(v[i].first.compare(k)==0)
     {cout<<v[i].second<<"\n"; break;}
     
     if(i==v.size())
     cout<<"Name not found\n";
     
     
 }
     
     
 return 0;
}

