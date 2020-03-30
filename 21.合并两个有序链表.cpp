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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* pre = new ListNode(-1);
        ListNode* prehead = pre;
        while(l1 != NULL && l2 != NULL){
            if (l1->val <=l2->val){
                pre->next = l1;
                l1 = l1->next;
            } else{
                pre->next = l2;
                l2 = l2->next;
            }
            pre =pre->next;
        }
        if(l1!=NULL){
            pre->next = l1;
        } else{
            pre->next = l2;
        }
        return prehead->next;
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
    L2->next = L3;
    L3->next = L6;
    L6->next = NULL;
    L4->next = L5;
    L5->next = NULL;
    Solution S;
    ListNode* res = S.mergeTwoLists(L1,L4);
    while (res) {
        cout<<res->val<<endl;
        res = res->next;
    }
}