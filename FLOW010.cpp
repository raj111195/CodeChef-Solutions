#include <iostream>
using namespace std;

int main() {

 int t,i,x,z;
 

cin>>t;

 while(t--)
 { 
     char n;
     cin>>n;
     
     if(n=='B' || n=='b')cout<<"BattleShip";
	if(n=='C' || n=='c')cout<<"Cruiser";
	if(n=='D' || n=='d')cout<<"Destroyer";
	if(n=='F' || n=='f')cout<<"Frigate";
    
     
  cout<<"\n";
}	return 0;
}

