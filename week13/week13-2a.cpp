///week13-2a.cpp 學習計劃 Linked List 第1題
///21. Merge Two Sorted Lists 左邊list1 右邊list2
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = new ListNode(888);
        ans->next = ans2;
        ///先寫四行, 熟悉一下資料結構‘怎麽new新的’
        return ans;
    }
};
