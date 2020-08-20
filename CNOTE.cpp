#include <iostream>
#include<vector>
using namespace std;

int main() {

 int t,i,x,n,z,a,b,c,d,y=0;
 
vector<int> v;
cin>>t;

 while(t--)
 {
     y=0;
     
     cin>>a>>b>>c>>d;
     
     a-=b;
     
     for(i=0;i<d;i++)
     {
         cin>>x>>z;
         
         if(x>=a && c>=z && y==0)
         {cout<<"LuckyChef"; y=1;}
     }
     
     if(y==0)
  cout<<"UnluckyChef";
  
  cout<<"\n";
}	return 0;
}

