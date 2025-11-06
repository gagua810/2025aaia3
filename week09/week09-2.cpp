///week09-2.cpp
///1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M = mat.size(), N = mat[0].size();
        int ans = 0;
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if (i==j || i+j==N-1) ans += mat[i][j];
            }
        }
    return ans;
    }
};
