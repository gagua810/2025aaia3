///week04-1.cpp
///LeetCode 挑戰題,照著題目寫程式
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;///一開始就喝那麽多瓶
        while(numBottles >= numExchange){///if瓶子數 >= 兌換量 ,就兌換
            numBottles = numBottles -  numExchange + 1;///兌換一瓶飲料
            ans ++; ///多喝了一瓶
            numExchange ++; /// 兌換的標準<多一瓶>
        }
        return ans;
    }
};
