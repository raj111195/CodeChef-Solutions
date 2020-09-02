#include <iostream>
#include<set>
using namespace std;

int main() {
int z;
 long long int t;
 
set<int> v;
cin>>z;

while(z--){

cin>>t;

 if(v.find(t%1007)==v.end())
  {cout<<t%1007<<"\n";
  v.insert(t%1007);}
}  
  	return 0;
}

