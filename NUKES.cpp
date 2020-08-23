#include <iostream>
#include<vector>
using namespace std;

int main() {

 int i,n,k;
 
 long long a;
 
 vector<int> v(101,0);

cin>>a>>n>>k;
     
     n++;
     
     for(i=1;i<=k;i++)
     {
        int hold = a/n;
        
        v[i]=hold;
        
        a-=hold*n;
        
        v[i-1]=a;
        
        a=v[i];
     }
     
 
  
  for(i=0;i<k;i++)
     cout<<v[i]<<" ";
  
	return 0;
}

