#include <iostream>
#include<vector>
#include<stdio.h>
 
using namespace std;
 
 
int gcd(int a, int b)
{
   
    if(b==0)return a;
    else return gcd(b,a%b);
}
 
 
int main() {
 
 int t,i,x,n,z;
 
cin>>t;
 
 while(t--)
 {vector<int> v;
 
    
    scanf("%d%d",&n,&x);
     //cin>>n>>x;
    
     for(i=0;i<n;i++)
     {
         scanf("%d",&z);
    //cin>>z;
         v.push_back(z);
        
     }
    
     int a[100003],b[100003];
 
     a[1]=v[0];
    
     a[0]=1;b[0]=1;
     b[1]=v[n-1];
    
     for(i=2;i<=n;i++)
     a[i]=gcd(a[i-1],v[i-1]);
    
     for(i=2;i<=n;i++)
     b[i]=gcd(b[i-1],v[n-i]);
    
   /* 
    
   for(i=0;i<=n;i++)
        cout<<a[i]<<" ";

cout<<"\n";

for(i=0;i<=n;i++)
         cout<<b[i]<<" ";
         
         cout<<"\n";
         
     */    
         int size=n;
    
     for(i=0;i<x;i++)
     {
        scanf("%d%d",&n,&z);
       
       if(n-1==0)
        printf("%d\n",b[size-z]);
       else if(z==size)
        printf("%d\n",a[n-1]);
       else
        printf("%d\n",gcd(a[n-1],b[size-z]));
       
     }
   
   
}              return 0;
} 
