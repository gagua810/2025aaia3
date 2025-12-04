///week13-2b.cpp 學習計劃 Linked List 第1題
///21. Merge Two Sorted Lists 左邊list1 右邊list2
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;///ans2幫忙ans把尾巴接好
        while (list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){
                ans2->next = list1;///接起來
                list1 = list1->next;///往右下一筆
                ans2 = ans2->next;///往右下一筆
            }else {///右邊小,先接右邊
                ans2->next = list2;///接起來
                list2 = list2->next;///往右下一筆
                ans2 = ans2->next;///往右下一筆
            }
        }
        ///還沒寫完、收尾,但是試試看它的答案是什麽！！！
        if(list1 != nullptr) ans2 ->next=list1;
        if(list2 != nullptr) ans2 ->next=list2;
        return ans->next;
    }
};
