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
    int getDecimalValue(ListNode* head) {
        int num = 0;
        while(head){
            num = num*2 + head->val;
            head = head->next;
        }
        return num;
    }
};
int main(){
    ListNode* L1 = new ListNode(1);
    ListNode* L2 = new ListNode(0);
    ListNode* L3 = new ListNode(1);
    ListNode* L4 = new ListNode(1);
    ListNode* L5 = new ListNode(0);
    ListNode* L6 = new ListNode(1);
    L1->next = L2;
    L2->next = L6;
    L6->next = L3;
    L3->next = L4;
    L4->next = L5;
    L5->next = nullptr;
    Solution S;
    int res = S.getDecimalValue(L1);
    cout<<res<<endl;
}