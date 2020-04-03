#include <iostream>
#include <vector>
#include <queue>
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL){
            return t2;
        }
        if(t2==NULL){
            return t1;
        }
        t1->val += t2->val;
        t1->left = mergeTrees(t1->left,t2->left);
        t1->right = mergeTrees(t1->right,t2->right);
    return t1;
    }
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        queue<TreeNode*> que;
		vector<int> vec;
		que.push(root);//先将整个二叉树放入队列
		while(!que.empty()) //当队列非空进行循环
		{
			TreeNode* p;
			p = que.front();//先读取队列的首元素
			que.pop();//弹出队列的首元素
			if(p == NULL)
				continue;//所有元素存入vec后，由于队列中存放着空指针，依然进入循环，但此时p的值为NULL，不执行下面的操作，跳出循环结束
			que.push(p->left);
			que.push(p->right);
			vec.push_back(p->val);
		}
		return vec;
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
    TreeNode* res = S.mergeTrees(T1,T4);
    vector<int> vec = S.PrintFromTopToBottom(res);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
}