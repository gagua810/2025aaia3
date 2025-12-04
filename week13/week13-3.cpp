///week13-3.cpp 學習計劃 Linked List 第3題
///LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        int carry = 0;///加法的進位
        while (l1 != nullptr || l2 != nullptr){
            int now = carry;///有沒有進位啊！
            if (l1 != nullptr){///如果還有值
                now += l1->val;///把值加進去
                l1 = l1->next;///換下一筆
            }
            if(l2 != nullptr){
                now += l2->val;///把值加進去
                l2 = l2-> next;///換下一筆
            }
            ans2->next = new ListNode( now%10 );///個位數, 準備一個node
            ans2 = ans2->next;///換下一筆
            carry = now / 10; ///進位的部分
        }
        ///還沒收尾,先看一下結果
        if(carry>0) ans2->next = new ListNode( carry );
        return ans->next;
    }
};
