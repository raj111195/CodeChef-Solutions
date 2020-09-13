#include <iostream>
#include<vector>
using namespace std;
 
int main() {
 
 int t,i,x,n;
 
//vector<int> v;
 
cin>>t;
 
 while(t--)
 {
     string a,b;
     cin>>n>>a;
 
     long int ans=0;
 
     for(i=0;i<n;i++)
     {
         cin>>b;
        // v.push_back(z);
 
                 if(b.compare("CONTEST_WON")==0)
                 {
                     cin>>x;
 
                     ans+=300;
                     if(x<20)
                     ans+=(20-x);
 
                 }
                 else if (b.compare("TOP_CONTRIBUTOR")==0)
                 {
                     ans+=300;
 
                 }
                  else if (b.compare("BUG_FOUND")==0)
                  {
                      cin>>x;
                     ans+=x;
 
                  }
                   else if (b.compare("CONTEST_HOSTED")==0)
                   ans+=50;
     }
//cout<<ans;
 
 if(a.compare("NON_INDIAN")==0)
 cout<<ans/400;
 else cout<<ans/200;
 
  cout<<"\n";
}
return 0;
}
