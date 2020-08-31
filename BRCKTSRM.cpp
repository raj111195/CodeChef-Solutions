#include <iostream>
#include<vector>
using namespace std;

int main() {

 int t;
cin>>t;

 while(t--)
 {vector<int> v;
     
     string n;
     cin>>n;
     
     int ans=1;
    
     
     for(int i=0;i<n.length();i++)
     {
         if(n[i]==')')
         { if(v.size()==0)
            {ans=0; break;}
           else v.pop_back();
         }
         else
         v.push_back(1);
         
     }
     
     
     if(ans==1 && v.size()==0)cout<<"YES";
     else cout<<"NO";
     
  cout<<"\n";
}	return 0;
}

