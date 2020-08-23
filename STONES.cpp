#include <iostream>
#include<algorithm>
#include <string>         
#include <cstddef>  

using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {
     string m,n;
     
     cin>>m>>n;
     
     sort(m.begin(),m.end());
     unique(m.begin(),m.end());
     
     size_t found = n.find_first_of(m);
     
     int ans=0;
  
  while (found!= string::npos)
  {
    ans++;
    found=n.find_first_of(m,found+1);
  }

     
     
  cout<<ans ;
  cout<<"\n";
}	return 0;
}

