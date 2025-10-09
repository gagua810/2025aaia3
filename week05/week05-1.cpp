///week05-1.cpp
///LeetCode 學習計劃 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);///把字串變成之前教的 cin iostream
        string word;///字串的word
        ///ss >> word; ///很像之前教的cin >> word
        ///cout << "讀到了" << "\n" ;    ///測試用
        ///ss >> word;//很像之前教的cin >> word
        ///cout << "讀到了" << "\n" ;    ///測試用
        while( ss >> word){ ///一直讀進來
            ///裡面什麽都不做
        }
        return word.length();///最後的字的長度 ///return 0 ; ///隨便
    }
};
