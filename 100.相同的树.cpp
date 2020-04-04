#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};


int main(){
    TreeNode* T1 = new TreeNode(1);
    TreeNode* T2 = new TreeNode(2);
    TreeNode* T3 = new TreeNode(3);
    TreeNode* T4 = new TreeNode(1);
    TreeNode* T5 = new TreeNode(2);
    TreeNode* T6 = new TreeNode(3);
    T1->left = T2;
    T1->right = T3;
    T4->left = T5;
    T4->right = T6;
    Solution S;
    bool res = S.isSameTree(T1,T4);
    cout<<res<<endl;
}