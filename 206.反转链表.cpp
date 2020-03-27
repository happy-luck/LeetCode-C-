#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x): val(x),next(NULL){}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* cur = head;
        ListNode* last;
        while(cur){
            last = cur->next;
            cur->next = pre;
            pre = cur;
            cur = last;
        }
        return pre;
    }
};

int main(){
    ListNode* L1 = new ListNode(1);
    ListNode* L2 = new ListNode(2);
    ListNode* L3 = new ListNode(3);
    ListNode* L4 = new ListNode(4);
    ListNode* L5 = new ListNode(5);
    ListNode* L6 = new ListNode(6);
    L1->next = L2;
    L2->next = L6;
    L6->next = L3;
    L3->next = L4;
    L4->next = L5;
    L5->next = nullptr;
    Solution S;
    ListNode* res = S.reverseList(L1);
    while(res) {
        cout<<res->val<<endl;
        res = res->next;
    }
}