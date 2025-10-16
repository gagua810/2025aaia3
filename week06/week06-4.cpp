///week06-4.cpp
///LeetCode 學習計劃 Simulation 模擬第二題 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;///一開始在原點0 Origin
        for(char c : moves){
            if(c=='U'){///往上
                y++;
            } else if(c=='D'){///往下
                y--;
            } else if(c=='L'){///往左
                x--;
            } else if(c=='R'){///往右
                x++;
            }
        }///最後還有留在原點(0,0)嗎
        if(x==0 && y==0)return true;
        else return false;
    }
};
