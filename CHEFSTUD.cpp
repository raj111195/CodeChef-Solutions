#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

 int t;
 string s;
 
cin>>t;

 while(t--)
 {
     long long int z=0;
     cin>>s;
     
     for(int i=1;i<s.length();i++)
     {
         
         if(s[i]=='>')
         {
             if(s[i-1]=='<')
             z++;
         }
         
     }
     
 
  cout<<z;
  cout<<"\n";
}	return 0;
}

