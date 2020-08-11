#include <iostream>
using namespace std;

int main() {

 int t,i,n;
 
 
cin>>t;

 while(t--)
 {
     string x,y;
     int min=0,f=0;
     
     cin>>x>>y;
     
     for(i=0;i<x.length();i++)
     {  if(x[i]!=y[i] && (x[i]!='?' && y[i]!='?')  )
         break;
     }
     
     if(i<x.length())
     cout<<"No";
     else
     cout<<"Yes";
     
  cout<<"\n";
}	return 0;
}


