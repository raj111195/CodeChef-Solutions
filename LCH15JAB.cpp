#include <iostream>
#include<string>
using namespace std;

int main() {

 int t,i,n;
 
 string z;

cin>>t;

 while(t--)
 {
    int a[26];
    
    for(i=0;i<26;i++)
     {
        a[i]=0;
     }
     
     cin>>z;
     
     for(i=0;i<z.size();i++)
     {
         a[z[i]-'a']++;
     }
     
     for(i=0;i<26;i++)
     {
        //cout<<a[i];
        if((float)a[i]==((float)z.length())/2) break;
     }
     
     
  if(i<26)     
  cout<<"YES";
  else cout<<"NO";
  cout<<"\n";
}	return 0;
}

