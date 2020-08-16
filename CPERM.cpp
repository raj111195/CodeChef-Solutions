#include <iostream>
#include<vector>
using namespace std;

int pow(int n)
{
    if(n==0)
    return 1;
    else if(n==1)
    return 2;
    else if(n%2)
    return pow(n-1)*2LL%1000000007; 
    else
    {
        int q=pow(n/2);
        
        return q*1LL*q%1000000007;
    }
    
    
}


int main() {

 int t,i,x,n,z;
 
vector<int> v;
cin>>t;

 while(t--)
 {
     
     cin>>n;
     if (n == 1) {
            cout <<"0"; }
     else
     cout<<pow(n-1)-2 ;
  cout<<"\n";
}	return 0;
}

