#include <iostream>
#include<string>

using namespace std;

int main() {

 int t,i,n,z=0;
 
cin>>t;

 while(t--)
 {
     z=0;
     cin>>n;
     string x;
     cin>>x;
     
     for(i=0;i<x.size();i++)
     if(x[i]=='I')
     break;
     else if(x[i]=='Y')
     z=1;
     
     if(i<x.size()) cout<<"INDIAN";
     else if(i==x.size() && z==1 )cout<<"NOT INDIAN";
     else cout<<"NOT SURE";
 
   cout<<"\n";
}	return 0;
}

