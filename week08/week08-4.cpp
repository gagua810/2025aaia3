///week08-4.cpp
///數字黑洞 卡不列克常數 6174（大到小 - 小到大, 重複7次）
#include <iostream>
#include <vector>///伸縮自如的陣列
#include <algorithm>///演算法 sort()是演算法！
using namespace std;
int main()
{
    cout << "請輸入任意4位數(都不同):";///ex:1234 1 2 3 4
    int n;
    cin >> n;
    for(int i=0; i<7; i++){///七步?,必定掉到黑洞
        vector<int> a;///伸縮自如的陣列
        while(n>0){///剝皮法,把4位數逐一剝出來
            a.push_back(n%10);///把他推到陣列裡面
            n = n / 10;///剝完皮,就瘦了
        }
        sort( a.begin(), a.end() );///把陣列小到大排好
        int M = a[3]*1000 + a[2]*100 + a[1]*10 +a[0];///倒過來, 大到小
        int m = a[0]*1000 + a[1]*100 + a[2]*10 +a[3];/// 小到大
        ///等一下, M是什? m是什? 還沒發明
        n = M - m;
        cout << M << "減掉" << "得到: " << n << endl;
    }
}
