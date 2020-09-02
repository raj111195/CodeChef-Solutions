#include <iostream>
#include<vector>
#include<string>
using namespace std;


char match(char d)
{
    if(d=='}') return '{';
    if(d==')') return '(';
    if(d==']') return '[';
    
    
    
}

int main() {

 int t,i,x;
 

cin>>t;

string n;
char z;

 while(t--)
 {vector<char> v;
     
     cin>>n;
     
    for(i=0;i<n.length();i++)
     {
         z=n[i];
         
         if(z=='(' || z=='{' || z=='[')
         v.push_back(z);
         else
         {if(v.size()==0){cout<<"no\n";break;}
         else{ if(v[v.size()-1]!=match(z))
           {cout<<"no\n";break;}
          else v.pop_back();}
         }
         
     }
     
     if(i<n.length()) continue;
     else cout<<"yes\n";
     //if(v.size()==0)
     
     
     
 
 
}	return 0;
}

