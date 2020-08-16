#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

 int t,i,x,n;
 string z;
 
vector<int> v;
cin>>t;

 while(t--)
 {
     
     cin>>n;
     
     int x,y,a=0,b=0,flag=0;
     
     for(i=0;i<n;i++)
     {
         cin>>z;
         //cout<<(z.substr(z.length()-3,3));
         
         if(z.length()>2)
         {if((z.substr(z.length()-3,3)).compare("man")==0)
         x=1;}
         else if(z.length()>4)
         {
             if((z.substr(z.length()-5,5)).compare("woman")==0)
             y=1;
         }
         
         
        if(x||y)
        a++;
        else
        b++;
        
        x=0;y=0;
        
        if(flag==0)
        {
        if((a-b)>1)
        {cout<<"superheroes";  flag=1;}
        else if((b-a)>2)
        {cout<<"villains"; flag=2;}
        }
     }
     
     if(flag==0)
     cout<<"draw";
     
     cout<<"\n";
     
  }	return 0;
}

