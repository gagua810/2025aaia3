///week05-2.cpp
///熟悉 stringstream
#include <iostream> ///cin,cout,getline讀寫資料
#include <sstream>  ///stringstream 需要他
#include <string>   ///我們的字串string
using namespace std; ///小心,這行容易忘記
int main()
{
        cout << "請輸入一段英文,裡面可有空格:";
        string s;///字串s
        getline(cin, s);
        cout << "讀到了字串:" << s << endl;

        stringstream ss(s); ///將字串s變成ss
        string word; ///字串word
        while (ss >> word){
            cout << "有1個字:" << word << endl;
        }


}
