#include <iostream>
using namespace std;

int main() {

 int t,i,n;
 

cin>>t;

 while(t--)
 {
     
     cin>>n;
     
     string z;
     cin>>z;
     
     int a[3];
     a[0]=0;a[1]=0;a[2]=0;
     
     for(i=0;i<z.length();i++)
     {
         if(z[i]=='R')
         a[0]++;
         else if(z[i]=='G')
         a[1]++;
         else a[2]++;
     }
     
     
     if(a[0]>=a[1] && a[0]>=a[2])
     cout<<a[1]+a[2];
     else if(a[1]>=a[2])
     cout<<a[0]+a[2];
     else
     cout<<a[1]+a[0];
      
  
  cout<<"\n";
}	return 0;
}

