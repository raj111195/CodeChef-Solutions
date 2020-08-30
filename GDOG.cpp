#include <iostream>
using namespace std;

int main() {

 int t;
 long long x,y,z;
 

cin>>t;

 while(t--)
 {
     
     cin>>x>>z;
     y=x;
     long long sh,ans=0,anss;
     
     for(long long i=2;i<=z;i++)
     {  x=y;
        sh=x/i;
        x=y-sh*i;
        if(x>ans)
        {ans=x; anss=i;}
         
     }
     
 
  cout<<ans ;
  cout<<"\n";
}	return 0;
}

