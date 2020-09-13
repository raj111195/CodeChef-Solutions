#include <iostream>
#include<vector>
using namespace std;

int main() {

 long long int t,i,x,n,z;
 
vector<int> v;

v.push_back(-1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);

for(i=7;i<1000001;i++)
v.push_back(!(v[i-1]||v[i-3]||v[i-5]));

//for(i=0;i<1000001;i++)
//cout<<i<<" "<<v[i]<<";; ";

cin>>t;


 while(t--)
 {
     
     cin>>n;
     
     cout<<(v[n]?"JACK":"JENNY")<<"\n";

//cout<<"\n";
}
return 0;
}

