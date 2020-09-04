#include <iostream>
#include<vector>
using namespace std;

int main() {

 long long int t,i,x;
 
vector<long long int> v(100000.0);


v[0]=1;
v[1]=0;
v[2]=1;

     for(i=3;i<=100000;i++)
     {
         
         v[i]=((i-1)*(v[i-1]+v[i-2]))%1000000007;
        // v[i]%=1000000007;
         
     }


cin>>t;     

while(t--)
{
    cin>>x;
 
  cout<<v[x];
  cout<<"\n";
}	return 0;
}

