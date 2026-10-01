//week04-2b.cpp SOIT_ADVANCE_008
//c++ version
#include <iostream>
#include <vector>
#include <algorithm>//(this week)
using namespace std;
int main()
{
	vector<int> a(10);//week03+week04
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	for(int i=9;i>=0;i--){
		cout<<a[i]<<' ';
	}
}
