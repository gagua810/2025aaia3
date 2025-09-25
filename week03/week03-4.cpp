///week03-4.cpp
///LeetCode 挑戰題(賺金幣題) 120.Triangle
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///triangle[i][j] 第i層的第j個數
        int N = triangle.size();
        ///從下往上查，最下面的第N-1層,沒問題就是本身最小值,soN-2往上更新
        for(int i = N-2; i>=0; i--){///倒過來的迴圈，從N-2往上
            for(int j=0; j<=i; j++){///從左到右,第1層有0..i個數，都要更新
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
                ///每個人要看下面2個選擇(正下方、下方偏右),找最小的那個
            }
        }
        return triangle[0][0];
    }
};
