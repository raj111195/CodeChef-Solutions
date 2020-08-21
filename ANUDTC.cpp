#include <iostream>
using namespace std;

int main() {

 int t,a,b,c,x;
 
//vector<int> v;
cin>>t;

 while(t--)
 {
     
     cin>>a;
     
     
    if( 360*1.0/a - int(360*1.0/a) > 0 ) 
    {cout<<"n ";x=0;} 
    else {cout<<"y ";x=1;}
    
    if(x)
    cout<<"y ";
    else
    { if(a<361)  cout<<"y ";
     else  cout<<"n "; }
     
    if(a<27)
    cout<<"y";
    else cout<<"n";
  
  cout<<"\n";
}	return 0;
}

