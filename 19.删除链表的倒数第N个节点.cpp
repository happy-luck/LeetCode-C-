#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* Node = new ListNode(0);
        Node->next = head;
        ListNode* fast = Node;
        ListNode* slow = Node;
        for(int i=0;i<n;i++){
            fast = fast->next;
        }
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return Node->next;
    }
};