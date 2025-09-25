///week03-3a.cpp 二合一的第1種方法
///LeetCode 學習計劃 283.Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        }///上面把<不是0的數>暫時放在ans裡,等下再塞回去
        ///再用for迴圈放回去
        for(int i=0; i<nums.size(); i++){
            if(i < ans.size()) nums[i] = ans[i];///塞回去
            else nums[i] = 0;///其他的放0
        }
    }
};
