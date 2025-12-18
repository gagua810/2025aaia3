/// week15-1.cpp 學習計畫 Basic 第4題
/// LeetCode 242. Valid Anagram 請問是否兩字串有關聯(字母都相同)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; /// 長度不一樣

        int H[256] = {}; /// 用來統計的 H 數量

        /// 先針對 s 字串，將一放入 H 陣列
        for (char c : s) { /// C++ 的進階 for 迴圈
            H[c]++; /// 把「字母」對應的格子++
        }
        /// 再針對 t 字串，將一拿出 H 陣列
        for (char c : t) {
            H[c]--; /// 把「字母」對應的格子--
            if (H[c] < 0) return false; /// 前面累積的字母「不夠用」
        }
        /// 沒有失敗的話
        return true; /// 就成功
    }
};
