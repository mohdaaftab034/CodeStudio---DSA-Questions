// Problem Link - https://www.naukri.com/code360/problems/validate-bst_981275?utm=codolio&leftPanelTabValue=PROBLEM



// ------------------Solution -> 1-------------------
#include <bits/stdc++.h> 

bool isBST(BinaryTreeNode<int>* root, int min, int max) {
    // Base case
    if(root == NULL) {
        return true;
    }

    // validate is BST
    if(root -> data > min && root -> data < max) {
        bool left = isBST(root -> left, min, root -> data);
        bool right = isBST(root -> right, root -> data, max);

        return left && right;
    } else 
        return false;
}

bool validateBST(BinaryTreeNode<int>* root) 
{
    return isBST(root, INT_MIN, INT_MAX);
}


// --------------------Solution -> 2-----------------------
#include <bits/stdc++.h> 

void inorder(BinaryTreeNode<int>* root, vector<int>& ans) {
    // Base case
    if(root == NULL) {
        return ;
    }

    inorder(root -> left, ans);
    ans.push_back(root -> data);
    inorder(root -> right, ans);
}

bool validateBST(BinaryTreeNode<int>* root) 
{
    vector<int> ans;

    inorder(root, ans);

    for(int i = 0; i < ans.size() -1; i++) {
        if(ans[i] >= ans[i+1]) {
            return false;
        }
    }

    return true;
}
