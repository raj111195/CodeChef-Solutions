#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

 int t,i,x,n,z;
 
vector<int> v;
cin>>t;

 while(t--)
 { cin>>z;
   v.push_back(z);
 
 }    
     
sort(v.begin(),v.end());
 
 for(i=0;i<v.size();i++)
 cout<<v[i]<<"\n";
 
	return 0;
}

