#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        stack<ListNode*> s;
        while (head != nullptr){
            s.push(head);
            head = head->next;
        }
        int size = s.size();
        vector<int> vec;
        for (int i = 0; i < size; i++) {
            vec.push_back(s.top()->val);
            s.pop();
        }
        return vec;
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
    vector<int> res = S.reversePrint(L1);
    for (int i = 0; i < res.size(); i++) {

        cout<<res[i]<<endl;
    }
}