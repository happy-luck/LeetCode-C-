#include <iostream>
using namespace std;

struct ListNode {   
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    };

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* sen = new ListNode(0);
        sen->next = head;
        ListNode *pre = sen, *cur = head, *toDelete = nullptr;;
        while(cur != nullptr){
            if(cur->val == val){
                pre->next = cur->next;
                toDelete = cur;
            } else pre=cur;
            cur = cur->next;
        }
        if (toDelete != nullptr) {
            delete toDelete;
            toDelete = nullptr;
      }
        ListNode *ret = sen->next;
        delete sen;
        return sen->next;
    }
};

int main(){
    ListNode* L1 = new ListNode(1);
    ListNode* L2 = new ListNode(2);
    ListNode* L3 = new ListNode(3);
    ListNode* L4 = new ListNode(4);
    ListNode* L5 = new ListNode(5);
    ListNode* L6 = new ListNode(6);
    ListNode* L7 = new ListNode(6);
    L1->next = L2;
    L2->next = L6;
    L6->next = L3;
    L3->next = L4;
    L4->next = L5;
    L5->next = L7;
    L7->next = nullptr;
    Solution S;
    ListNode *res = S.removeElements(L1,6);
    while (res != nullptr)
    {
        cout<<res->val<<endl;
        res = res->next;
    }
};