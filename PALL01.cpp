#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {

 int t;
 
cin>>t;


 while(t--)
 {
    string a; cin>>a;
     int i;
  for(i=0;i<a.length()/2;i++)
  if(a[i]!=a[a.length()-1-i])
  break;
  
  
  if(i<a.length()/2) cout<<"losses";
  else cout<<"wins";
  cout<<"\n";
}return 0;	
}

