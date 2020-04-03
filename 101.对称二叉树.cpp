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
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return judge(root->left,root->right);
    }

    bool judge(TreeNode* l,TreeNode* r){
        if(l==NULL && r==NULL){
            return true;
        }
        if(l==NULL || r==NULL){
            return false;
        }
        if(l->val==r->val){
            return judge(l->left,r->right) && judge(l->right,r->left);
        }
        return false;
    }
};

int main(){
    TreeNode* T1 = new TreeNode(1);
    TreeNode* T2 = new TreeNode(2);
    TreeNode* T3 = new TreeNode(1);
    T1->left = T2;
    T1->right = T3;
    Solution S;
    bool res = S.isSymmetric(T1);
    cout<<res<<endl;
}