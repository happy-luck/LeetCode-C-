#include <iostream>
#include <vector>
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
    L1->next = L2;
    L2->next = L3;
    Solution S;
    S.deleteNode(L2);
    ListNode* p = L1;
    while(p){
        cout<<p->val<<endl;
        p = p->next;
    }
}