#include <iostream>
#include<vector>
#include<set>

using namespace std;

int main() {

 int t,i,x,n,k;
 vector<string> v;
 set<string> s;
 
cin>>t;

 while(t--)
 {
     
     cin>>n>>k;
      string y;
     for(i=0;i<n;i++)
     {
        
         cin>>y;
         v.push_back(y);
         
     }
     
     for(i=0;i<k;i++)
     {
         cin>>n;
         for(int j=0;j<n;j++)
     {
         cin>>y;
         s.insert(y);
         
     }
         
     }
     
     for(i=0;i<v.size();i++)
     {
         if(s.find(v[i])!=s.end())
         {
             cout<<"YES";
         }
         else cout<<"NO";
         
         if(i<v.size()-1) cout<<" ";
     }  
 
   cout<<"\n";
   v.clear(); s.clear();
}	return 0;
}

