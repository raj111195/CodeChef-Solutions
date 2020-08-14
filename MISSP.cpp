#include <iostream>
#include<set>
using namespace std;

int main() {

 int t,i,x,n;
 
 
cin>>t;

 while(t--)
 { 
     set<int> s;
     set<int>::iterator it;

     
     cin>>n;
     
     for(i=0;i<n;i++)
     {
         cin>>x;
         
        if(s.find(x)==s.end())
        s.insert(x);
        else
        s.erase(x);
    }
    
    it=s.begin();
    cout<<*it ;
  cout<<"\n";
}	return 0;
}

