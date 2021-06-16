#include <iostream>
#include<string>
using namespace std;

int main() {
 int n;
 cin>>n;
 string s;
 cin>>s;
 int r=0;
 int g=0;
 int b=0;
 for(int i=1;i<n;i++){
 	if(s[i-1]==s[i])
 	++r;
 }
 cout<<r+g+b;
  	return 0;
}