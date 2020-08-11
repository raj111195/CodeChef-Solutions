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
     {
         if(x[i]=='?' && y[i]!='?')
         min++;
         else if (x[i]!='?' && y[i]=='?')
         min++;
         else if (x[i]=='?' && y[i]=='?')
         min++;
         else if(x[i]==y[i])
         f++;
         
     }
     
     
  cout<<x.length()-min-f<<" "<<x.length()-f;
  cout<<"\n";
}	return 0;
}

