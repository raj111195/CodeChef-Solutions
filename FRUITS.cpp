#include <iostream>
using namespace std;


int abs(int x)
{
    return (x>=0)?x:-x;
}

int main() {

 int t,i,x,n,y;
 
 
cin>>t;

 while(t--)
 {
     
     cin>>n>>x>>y;
     
     int d=abs(n-x);

    if(y>=d)cout<<"0"; 
    else cout<<d-y;  
 
  cout<<"\n";
}
	return 0;
}

