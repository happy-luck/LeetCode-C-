#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL){
            return true;
        }
        ListNode* first_end = end_of_first_half(head);
        ListNode* second_start = reverse(first_end->next);
        ListNode* first = head;
        ListNode* second = second_start;
        bool result = true;
        while(second!=NULL){
            if (first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        first_end->next = reverse(second_start);
        return result;
    }
    ListNode* end_of_first_half(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* pre = NULL;
        ListNode* cur = head;
        while(cur!=NULL){
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
};

int main(){
    ListNode* L1 = new ListNode(1);
    ListNode* L2 = new ListNode(2);
    ListNode* L3 = new ListNode(3);
    ListNode* L4 = new ListNode(3);
    ListNode* L5 = new ListNode(2);
    ListNode* L6 = new ListNode(1);
    L1->next = L2;
    L2->next = L3;
    L3->next = L4;
    L4->next = L5;
    L5->next = L6;
    L6->next = nullptr;
    Solution S;
    bool res = S.isPalindrome(L1);
    cout<<res<<endl;
}