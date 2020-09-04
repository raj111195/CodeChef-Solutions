#include <iostream>
#include<vector>
using namespace std;

int main() {

 long long int t,i,n,z;
 

cin>>t;

 while(t--)
 {
     vector<long long int> v;
     cin>>n;
     long long int max=0,c=0;
     
      if(n>=1)
      {cin>>z;
         v.push_back(z);
       }
       
       if(n>=2)
       {cin>>z;
         v.push_back(z);
       }
     
     for(i=2;i<n;i++)
     {
         cin>>z;
         
         if(z==(v[i-2]+v[i-1]))
      {   c++;
      
         if(c>max)
          max=c;
         
     }
     else
     c=0;
         
         v.push_back(z);
     }     
         
     
     
     if(v.size()==1)
     cout<<"1";
     else if(v.size()==2)
     cout<<"2";
     else if(v.size()>2)
      cout<<2+max;
  cout<<"\n";
}	return 0;
}

