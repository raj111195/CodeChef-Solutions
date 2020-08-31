#include <iostream>
#include <math.h> 
#define PI 3.14159265

using namespace std;

int main() {

 int t,i,x,n,z;
 

cin>>t;

 while(t--)
 {
     string n;
     cin>>n;
     
     long double x=0,y=0;
     
     for(i=0;i<n.length();i++)
     {
         if(n[i]=='N')
         y++;
         else if (n[i]=='S')
         y--;
         else if (n[i]=='E')
         x++;
         else x--;
     }
     
      //long long result = atan (-(y/x)) * 180 / PI;
      
      //cout<<result<<" ";
     
   if(x>0 && y==0)
   cout<<"EAST";
   else if(x>0 && y>0)
   cout<<"NORTHEAST"; 
   else if(y>0 && x==0)
   cout<<"NORTH";
   else if(x<0 && y>0)
   cout<<"NORTHWEST";
   else if(x<0 && y==0)
   cout<<"WEST";
   else if(x<0 && y<0)
   cout<<"SOUTHWEST";
   else if(y<0 && x==0)
   cout<<"SOUTH";
   else if(x>0 && y<0)
   cout<<"SOUTHEAST";
 
  cout<<"\n";
}	return 0;
}

