///week05-3a.cpp Part1:Input,Part2:Output
///Part3:stringstream Part4:reverse�ϹL��
///Part5:�����Y + ���[ + ���[ + ���[
///CPE ��2�D UVA 483 �˹L��
#include <iostream>
#include <sstream>///Part3:stringstream ���ɮ׬Osstream
#include <algorithm>///Part4:reverse ���t��k
using namespace std;
int main()
{
    string line;///�@��r���r��Part1:Input
    while ( getline(cin, line) ){///Ū�i��
        stringstream ss(line);///Part3:��stringstream�_�r
        string word;///�r��o��
        ss >> word; ///�����Y�b�o��
        reverse(word.begin(), word.end());
        cout <<word;///�����Y�S���Ů�
        while ( ss >> word ) { ///Part3:��ss�_�r
            reverse(word.begin(), word.end());///Part4
            cout << " " << word;
            ///cout << "Ū��F" << word << endl;///Part3
        }
        cout <<endl; ///cout << line <<endl;///Part2:Output
    }

}
