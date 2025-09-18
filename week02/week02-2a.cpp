//week02-2a.cpp Part 1
//SOIT106_ADVANCE_001 Using C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;

	string ans;
	int N = a.length();
	for(int i = N-1; i >= 0; i--){
		ans += a[i];
	}
	cout << ans;
}
