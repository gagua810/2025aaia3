///week06-3.cpp
///LeetCode 學習計劃 Simulation 模擬第一題 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations){///C++進階洄圈
            ///cout << op << endl;//試試看，會印出什麽
            if(op[0] == '+'){///把末兩數相加，再塞回去
              int temp = a.back();///先記下最後一項
              a.pop_back();///暫時吐掉它
              int temp2 = a.back();///再記下最後第2項
              a.push_back(temp);
              a.push_back(temp+temp2);
            } else if(op[0]=='D'){/// 複製最後一位，再塞回去
                a.push_back( a.back()*2 );
            } else if(op[0]=='C'){/// 吐掉最後一位
                a.pop_back();
            } else{///把stoi(op)整數，塞回去
                a.push_back( stoi(op));
            }
        }
        ///最後，用for洄圈，把陣列a的值全部加起來
        int ans = 0;
        for(int now : a){///C++進階洄圈,也可以用 for(int i=0;i<a.size();i++){int now=a[i]}
            ans += now;
        }
        return ans;///先隨便return 0等一下再改
    }
};
