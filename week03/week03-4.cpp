///week03-4.cpp
///LeetCode �D���D(�Ȫ����D) 120.Triangle
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///triangle[i][j] ��i�h����j�Ӽ�
        int N = triangle.size();
        ///�q�U���W�d�A�̤U������N-1�h,�S���D�N�O�����̤p��,soN-2���W��s
        for(int i = N-2; i>=0; i--){///�˹L�Ӫ��j��A�qN-2���W
            for(int j=0; j<=i; j++){///�q����k,��1�h��0..i�ӼơA���n��s
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
                ///�C�ӤH�n�ݤU��2�ӿ��(���U��B�U�谾�k),��̤p������
            }
        }
        return triangle[0][0];
    }
};
