#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {   
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    };

class Solution {
public:
    int kthToLast(ListNode* head, int k) {
        ListNode *fast = head;
        ListNode *slow = head;
        for(int i=0;i<k;i++){
            fast = fast->next;
        }
        while(fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow->val;
    }
};