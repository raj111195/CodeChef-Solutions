#include <iostream>
#include<vector>
using namespace std;

int main() {

 long long int t,i,x,n,z;
 
//vector<int> v;
cin>>t;

 while(t--)
 {
     
     cin>>n>>z;
     
     long long int ans=z-n+1;
     
     //if(n==1) ans++;
     
     for(i=3;i<=z;i+=2)
     {
         ans+=(z/i - (n-1)/i)*i;
         
     }
     /*
     
     
      if(n==1) {ans++; n=2;}
      
     for(i=n;i<=z;i++)
     {
           long int sum=1;
       
       for(long int j=3;j<=(i/2);j+=2)
       if(i%j==0)
       sum+=j;
       
       if(i%2)
       sum+=i;
        
       ans+=sum;  
     }
     */
 
  cout<<ans;
  cout<<"\n";
}	return 0;
}

