#include <iostream>
using namespace std;

struct ListNode {   
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    }; 

class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if (head->val ==val)
            return head->next;
        ListNode* pre = head;
        ListNode* cur = head->next;
        while(cur && cur->val != val){
            pre = cur;
            cur = cur->next;
        }
        pre->next = cur->next;
        return head;
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
    ListNode *res = S.deleteNode(L1,2);
    while (res != nullptr)
    {
        cout<<res->val<<endl;
        res = res->next;
    }
}