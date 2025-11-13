//LeetCode
//在haystack 乾稻草堆裡找到needle 針（大海撈針）
//haystack: sadbutsad
//needle:   sad i:0
//           sad i:1
//            sad i:2
//             sad i:3
//              sad i:4
//               sad i:5
//                sad i:6
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();//字串的長度
        for(int i=0; i<=H - N; i++){//9減3得到6
            //.substr(開始,長度) 部分的字串
            if(haystack.substr(i,N) == needle) return i;//找到答案
        }
        
        return -1;//洄圈裡面 找不到needle 就失敗
    }
};