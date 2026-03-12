// Problem - https://www.naukri.com/code360/problems/minimum-depth-in-a-binary-tree_696332?interviewProblemRedirection=true&search=depth&leftPanelTabValue=PROBLEM



// ----------------------Solution------------------------
#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
    
    template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int minDepth(TreeNode<int>* root)
{
    // Base case
    if(root == NULL) {
        return 0;
    }

    queue<pair<TreeNode<int>*, int>> que;
    que.push({root, 1});

    while(!que.empty()) {
        auto front = que.front();
        que.pop();

        TreeNode<int>* node = front.first;
        int depth = front.second;

        if(node -> left == NULL && node -> right == NULL) {
            return depth;
        }

        if(node -> left) {
            que.push({node -> left, depth + 1});
        }

        if(node -> right) {
            que.push({node -> right, depth + 1});
        }
    }
    return 0;
}




// -----------------------Solution--------------------------
#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
    
    template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int minDepth(TreeNode<int>* root)
{
    if(root == NULL) return 0;

    if(root -> left == NULL) {
        return 1 + minDepth(root -> right);
    }

    if(root -> right == NULL) {
        return 1 + minDepth(root -> left);
    }

    return 1 + min(minDepth(root -> left), minDepth(root -> right));
}
