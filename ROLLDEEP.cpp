#include <iostream>
#include<vector>
using namespace std;

int main() {

 long long int p,i,max=0,c=0;
 
 string s;
 
//vector<int> v;
getline(cin,s);

     for(i=0;i<s.length();i++)
     {
       if(s[i]=='(')
        {c++;
       
         if(c>max)
         { max=c;
           p=i;
         }
         
        }
        
        else if(s[i]==')')
         c--;
     }
     
     for(i=p+1;;i++)
     {
      if(s[i]==')')
      break;
      cout<<s[i];
     }
     
     
 
  //cout<< ;
  //cout<<"\n";
	return 0;
}

