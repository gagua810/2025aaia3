///week14-2.cpp 學習計劃 Linked List 第二題
///LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ///5行搞定‘函式呼叫函式’
        if(head == nullptr || head->next==nullptr) return head;

        ListNode* ans =reverseList(head-> next);
        head->next->next= head;
        head->next=nullptr;
        return ans;
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
