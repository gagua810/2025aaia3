/// week15-2.cpp 學習計畫第5題 找字串是否由「重複的字串」組成
/// LeetCode 459. Repeated Substring Pattern
/// ex. abab 變成 abab + abab 兩倍
/// ababab
/// bababa 去掉頭尾，問裡面有沒有原本的字串

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s; /// 變兩倍的字串
        string s3 = s2.substr(1, s2.length()-2); /// 去掉頭、尾
        return s3.find(s) != string::npos; /// 在 s3 裡，找 s 字串
    } /// 如果有找到 vs. 如果找不到(會是 string::npos)
};
/// !=「不等於」 string::npos「找不到」 (雙重否定)
