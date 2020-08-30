#include <iostream>
using namespace std;
int main() {
    
long long t,i,x,n,z;
 
long long a[100001];

for(i=0;i<100001;i++)
{a[i]=1;}

a[0]=0;
a[1]=0;

for(i=3;i<100001;i=i+2)
{   if(a[i])
    for(long long j=2*i;j<=100001;j+=i)
    a[j]=0;
}

cin>>t;

 while(t--)
 {   cin>>n;
    
     if(a[n])
  cout<<"yes";
  else cout<<"no";
  
  cout<<"\n";
}	return 0;
}

