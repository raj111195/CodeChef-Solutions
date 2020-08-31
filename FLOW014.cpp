#include <iostream>
using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {
     int a,c;
     float b;
     
     cin>>a>>b>>c;
     
     if(a>50) a=1;
     else a=0;
     if(b<0.7) b=1;
     else b=0;
     if(c>5600) c=1; 
     else c=0;
     
     
     if(a && b && c)
     cout<<"10";
     else if(a && b) cout<<"9";
     else if(b && c) cout<<"8";
     else if(a && c) cout<<"7";
     else if(a || b || c) cout<<"6";
     else cout<<"5";
     
     
 
 cout<<"\n";
}	return 0;
}

