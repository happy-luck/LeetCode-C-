#include <iostream>
using namespace std;

struct ListNode {   
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    }; 

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
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
    ListNode *res = L1;
    S.deleteNode(L6);
    while (res != nullptr)
    {
        cout<<res->val<<endl;
        res = res->next;
    }
}