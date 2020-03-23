#include <iostream>
#include <vector>
using namespace std;

struct ListNode {   
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    };

// 方法一
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* cur = head;
//         int num = 0;
//         while(cur != nullptr){
//             cur = cur->next;
//             num += 1;
//         }
//         int k = 0;
//         cur = head;
//         while (k < num / 2) {
//             ++k;
//             cur = cur->next;
//         }
//         return cur;
//     }
// };
// 方法二
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> A;
        A.push_back(head);
        while(A.back()->next!=NULL){
            A.push_back(A.back()->next);
        }
        return A[A.size()/2];
    }
};

// 方法三
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* fast = head;
//         ListNode* slow = head;
//         while (fast!=nullptr && fast->next!=nullptr){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };
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
    ListNode *res = S.middleNode(L1);
    while (res != nullptr)
    {
        cout<<res->val<<endl;
        res = res->next;
    }
};