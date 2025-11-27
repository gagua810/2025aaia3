///week12-2.cpp 學習計畫 Math 第4題
///LeetCode  976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());///先(有效率的)順序
        ///先練習倒過來的迴圈,把大到小印出來(等一下會刪掉)
        ///for (int i=nums.size()-1; i>=0; i--){ //(等一下會刪掉)
        ///      cout << nums[i] << " ";//(等一下會刪掉)
        ///} //把大到小印出來,正確。(等一下會刪掉)
        for (int i=nums.size()-1; i>=2; i--){
            if(nums[i] < nums[i-1] + nums[i-2]){
                return nums[i] + nums[i-1] + nums[i-2];
            }///找到最大的‘合法’三角形,把三邊加起來
        }
        return 0;///找不到答案,return 0
    }
};
