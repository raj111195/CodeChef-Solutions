#include <iostream>
using namespace std;

int main() {

 int t,i,x,n,z;
 int ta=0,tb=0,win1=0,win2=0;

cin>>t;

 while(t--)
 {
     
     cin>>x>>z;
     
     ta+=x;
     tb+=z;
     
     if(ta>tb)
     {
         if(ta-tb>win1) 
         win1=ta-tb;
     }
     else 
     {
         if(tb-ta>win2) 
         win2=tb-ta;
     }
     
 }
     
  if(win1>win2)     
  cout<<"1 "<<win1;
  else
  cout<<"2 "<<win2;
	return 0;
}

