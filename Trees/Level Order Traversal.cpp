// Problem - https://www.naukri.com/code360/problems/level-order-traversal_796002?interviewProblemRedirection=true&practice_topic%5B%5D=Breadth-first%2520Search&practice_topic%5B%5D=Depth-first%2520Search&leftPanelTabValue=PROBLEM&count=25&page=2&search=&sort_entity=order&sort_order=ASC



// ----------------Solution------------------
#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> result;
    if(root == NULL) return result;

    queue<BinaryTreeNode<int>*> que;
    que.push(root);

    while(!que.empty()) {
        BinaryTreeNode<int>* node = que.front();
        que.pop();

        result.push_back(node->val);

        if(node->left) que.push(node->left);
        if(node->right) que.push(node->right);
    }

    return result;
}
