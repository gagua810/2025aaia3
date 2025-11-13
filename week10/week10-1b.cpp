///week10-1b.cpp 寫2次,第2次,第1次用for迴圈, 第2次用數學
///1523. Count Odd Numbers in an Interval Range
///從low...high裡面有幾個od奇數？
class Solution {
public:
    int countOdds(int low, int high) {
        int ans =(high-low) / 2;
        if(high%2 == 1 || low%2 == 1) ans++;
        return ans;

    }
};
