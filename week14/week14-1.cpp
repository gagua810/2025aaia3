///week14-1.cpp 學習計劃 Linked List 第二題
///LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;///伸縮自如的陣列,把值存起來
        while (head != nullptr){
            a.push_back(head->val);
            head = head->next;
        }
        ListNode* ans = new ListNode(999);///隨便放的
        ListNode* ans2 = ans;///負責把ans的尾巴‘收尾’
        ///倒過來的迴圈,再把它塞到ans尾巴的答案
        for (int i=a.size()-1; i>=0; i--){ ///倒過來的迴圈
        ans2->next = new ListNode( a[i]);///下一筆
        ans2 = ans2->next;///到下一筆,繼續‘收尾’
    }
        return ans->next;///還差一點點哦
    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
