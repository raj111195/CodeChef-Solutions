#include <iostream>
using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {
     
     int a[26],b[26];
     
     for(i=0;i<26;i++)
     {a[i]=0; b[i]=0;}
     
     string n;
     cin>>n;
     
     
     for(i=0;i<n.length()/2;i++)
     a[n[i]-'a']++;
     
     if(n.length()%2)
     {   
     for(i=(n.length()/2)+1;i<n.length();i++)
     b[n[i]-'a']++;
      }
      else
      {
     for(i=(n.length()/2);i<n.length();i++)
     b[n[i]-'a']++;
      }
      
      for(i=0;i<26;i++)
      if(a[i]!=b[i])
      break;
 
  if(i<26)cout<<"NO";
  else cout<<"YES";
  cout<<"\n";
}	return 0;
}

