///week10-3.cpp 把<羅馬數字>算出來
///LeetCode 13. Roman to Integer
///1:I 2:II 3:III 4:IV 5:V
///6:VI 7:VII 8:VIII 9:IX 10:X
///11:XI 12:XII
///(1)
///(2)
///Input: "MCMXCIV" Output:1994
class Solution {
public:
    int helper(char c){///把1個字母,變成1個數字
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;

    }
    int romanToInt(string s) {
        int total = 0, prev = 0, now = 0;
        for(int i=0; i<s.length(); i++){
            prev = now;
            now = helper( s[i] );///
            if(prev < now)total = total - prev - prev + now;
            else total += now;
        }
        return total;
    }
};
