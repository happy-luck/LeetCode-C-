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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow!=fast){
            if(fast ==NULL || fast->next==NULL){
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
    return true;
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
    L3->next = L4;
    L4->next = L1;
    // L->next = nullptr;
    Solution S;
    bool res = S.hasCycle(L1);
    cout<<res<<endl;
}