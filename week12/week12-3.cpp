///week12-3.cpp 學習計畫 Math 倒數第2題
///LeetCode 43. Multiply Strings
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 =="0" || num2 =="0") return "0";///陷阱:0乘上任何數,直接0
        int N1 = num1.length(), N2 = num2.length();
        vector<int> ans(N1+N2);///這麽多N1+N2
        for (int i=N1-1; i>=0; i--){///兩層暴力for迴圈
             for (int j=N2-1; j>=0; j--){///倒過來的迴圈
                ///num1[i] vs. num2[j] 要記得字母變數值
                ans[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                if (ans[i+j+1]>9) ans[i+j] += ans[i+j+1] / 10;///進位
                ans[i+j+1] = ans[i+j+1] % 10; ///餘數
             }
        }///還沒完成！！
        string strAns;///答案的字串
        if (ans[0]==0){///沒有進位, 最前面是0啊啊啊
            for (int i=1; i<N1+N2; i++){///只好避開最前面的0啦
                strAns += (char)(ans[i]+'0');
            }
        }else{///有進位, 凑齊N1+N2 位
            for (int i=0; i<N1+N2; i++){
                strAns += (char)(ans[i]+'0');
            }
        }///還沒完成！！
        return strAns;
    }
};
