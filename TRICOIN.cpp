#include <iostream>
#include<vector>
using namespace std;

int main() {

 long long int t,i,n;
 
//vector<int> v;
cin>>t;

 while(t--)
 {
     
     cin>>n;
     
     for(i=1;n>=i;i++)
     {
         n-=i;
         
     }
     
 
  cout<<i-1;
  cout<<"\n";
}	return 0;
}

