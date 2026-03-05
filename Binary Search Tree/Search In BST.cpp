// Problem Link - https://www.naukri.com/code360/problems/search-in-bst_1402878?interviewProblemRedirection=true&search=BST&leftPanelTabValue=PROBLEM


// -------------Solution----------------
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Base case -> is x is not present
    if(root == NULL) {
        return false;
    }

    // Second base case -> if x is present 
    if(root -> data == x) {
        return true;
    }

    // left case
    if(root -> data > x) {
        searchInBST(root -> left, x);
    } else {
        searchInBST(root -> right, x);
    }
}
