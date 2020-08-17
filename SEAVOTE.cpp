#include <iostream>
#include<vector>
using namespace std;

int main() {

 int t,i,x,n,z;
 
cin>>t;

 while(t--)
 {
     
     cin>>n;
     
    // vector<int> v;
    
    long long int lo=0,hi=0,y;

     
     for(i=0;i<n;i++)
     {
         cin>>z;
        
        if(z!=0)
        y=1;
        
        lo+=max(0,z-1);
        hi+=z;
        
     }
     
     if(lo+y<=100 && hi>=100)
       cout<<"YES" ;
       else cout<<"NO" ;
  cout<<"\n";
}	return 0;
}

