///week03-3b.cpp �G�X�@����2�ؤ�k �������ʴN�n�F
///LeetCode �ǲ߭p�� 283.Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) nums[k++] = nums[i];
        }
        for(int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
