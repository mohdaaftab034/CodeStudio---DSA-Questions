// Problem Link = https://www.naukri.com/code360/problems/find-k-th-smallest-element-in-bst_1069333?utm=codolio&count=25&page=1&search=find%20k-th&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav



// ------------------Solution -> 1----------------------
#include <bits/stdc++.h> 

int solve(BinaryTreeNode<int>* root, int& i, int k) {
    // Base case
    if(root == NULL) {
        return -1;
    }

    int left = solve(root -> left, i, k);

    if(left != -1) {
        return left;
    }

    i++;
    if(i == k) {
        return root -> data;
    }

    return solve(root -> right, i, k);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i = 0;
    int ans = solve(root, i, k);

    return ans;
}


// ------------------Solution -> 2-----------------------
#include <bits/stdc++.h> 

int solve(BinaryTreeNode<int>* root, int& i, int k) {
    // Base case
    if(root == NULL) {
        return -1;
    }

    int left = solve(root -> left, i, k);

    if(left != -1) {
        return left;
    }

    i++;
    if(i == k) {
        return root -> data;
    }

    return solve(root -> right, i, k);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i = 0;
    int ans = solve(root, i, k);

    return ans;
}
