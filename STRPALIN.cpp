#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
 
 
int t,i,j;
string x,y;
 
cin>>t;
 
while(t--)
{
 
cin>>x>>y;
 
  for(i=0;i<x.size();i++)
  {
   for(j=0;j<y.size();j++)
    {
        if(x[i]==y[j])
        {cout<<"Yes"; break;}
    }
    
    if(j<y.size())
    break;
  }
  
  if(i>=x.size())
  cout<<"No";
  
  cout<<"\n";
  
 
 
}
 
return 0;
} 
