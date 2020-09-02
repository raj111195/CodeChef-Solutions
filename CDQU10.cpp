#include <iostream>
#include<string>
using namespace std;

int main() {
	
	
	int t;
	cin>>t;
	
	string z;
	while(t--)
	{
		
		cin>>z;
		
		if(z.find_first_of("aeiou")!=string::npos)
		cout<<"yes\n";		
		else cout<<"no\n";
		
		
	}
	// your code goes here
	return 0;
}
