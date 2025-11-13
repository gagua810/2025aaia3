//week01-3.cpp
# include <iostream>// 使用C++的外掛，負責輸入Input 輸出Output
using namespace std;// 使用C++的std 的<命名空間> 

int main()
{
    int n;
    cin >> n; //使用 C++ 的 Console Input 輸入文字資料
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += i*i;
    }
    cout << ans; //使用 C++ 的 Console Output 輸出文字資料


}