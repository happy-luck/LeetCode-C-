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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pA = headA;
        ListNode* pB = headB;
        while(pA!=pB){
            pA = pA==NULL?headB:pA->next;
            pB = pB==NULL?headA:pB->next;
        }
        return pA;
    }
};

int main(){
    ListNode* L1 = new ListNode(1);
    ListNode* L2 = new ListNode(2);
    ListNode* L3 = new ListNode(3);
    ListNode* L4 = new ListNode(4);
    ListNode* L5 = new ListNode(5);
    ListNode* L6 = new ListNode(6);
    ListNode* L7 = new ListNode(7);
    L1->next = L2;
    L2->next = L3;
    L3->next = L4;
    L4->next = L5;
    L5->next = L6;
    L6->next = nullptr;
    L7->next = L3;
    Solution S;
    ListNode* res = S.getIntersectionNode(L1,L7);
    while(res) {
        cout<<res->val<<endl;
        res = res->next;
    }
}