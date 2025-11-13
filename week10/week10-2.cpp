///week10-2.cpp(去除Max、min後,的平均薪水)
///1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;
        int N = salary.size();
        int M = salary[0], m = salary[0];
        for(int i = 0; i<N; i++){
            total += salary[i];
            if(salary[i] > M) M=salary[i];
            if(salary[i] < m) m=salary[i];
        }
        ///return total / N; ///不可以直接全部都除, 要先扣掉Max、min
        return(total - M - m) / (N-2);///去除2個人（Max、min）再除
    }
};
