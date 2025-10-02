///week04-4c.cpp Part1:Input Part2: Output
///UVA100 The 3n + 1
///Part3:Algorithm(while,if),Part4:now
///Part5:for(int i=a; i<=b; i++)
#include <iostream>
using namespace std;
int main()
{
	int a, b;///Part1:Input
	while(cin >> a >> b){
		int ans = 0;
		int a2=a, b2=b;///Part6
		if(a2>b2) swap(a2,b2);///Part6
		for(int i=a2; i<=b2; i++){///Part5 Part6
		int now = 1;///Part4
		int n = i;
		while(n != 1){///Part3
			if(n%2==1) n = 3*n+1;
			else n =n / 2;
			now++;///Part4
		}
		if(now>ans) ans = now;///Part4
	}
		printf("%d %d %d\n", a, b, ans);
	}///Part2: Output

}
