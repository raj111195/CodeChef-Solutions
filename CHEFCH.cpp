#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

 int t;//,i;//,i,x,n,z;
 string s;
//vector<int> v;
cin>>t;

 while(t--)
 {
     
     cin>>s;
     long long int i,c=0,d=0;
     
     for(i=0;i<s.length();i+=2)
     {
         if(s[i]!='-')
         c++;
     }
     for(i=1;i<s.length();i+=2)
     {
         if(s[i]!='+')
         c++;
     }
     
 
     for(i=0;i<s.length();i+=2)
     {
         if(s[i]!='+')
         d++;
     }
     for(i=1;i<s.length();i+=2)
     {
         if(s[i]!='-')
         d++;
     }
     
 
  cout<<(c>=d?d:c);
  cout<<"\n";
}	return 0;
}

