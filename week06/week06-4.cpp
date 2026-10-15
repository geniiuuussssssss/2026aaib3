//week06-04.cpp SOIT108_ADVANCE_10
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int N=s.length();
	for(int i=0;i<N;i++){
		cout<<s[i];
		if((N-i-1)%3==0 && (N-1-i)!=0 ) cout<<",";
	}
}
