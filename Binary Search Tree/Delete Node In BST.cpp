// Problem Link - https://www.naukri.com/code360/problems/delete-node-in-bst_920381?interviewProblemRedirection=true&search=delete%20node%20&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav



// ------------------Solution------------------
BinaryTreeNode<int>* maxValue(BinaryTreeNode<int>* root) {
    BinaryTreeNode<int>* temp = root;

    while(temp -> right != NULL) {
        temp = temp -> right;
    }

    return temp;
} 


BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key) {
    // Base case -> if key is not present in BST
    if(root == NULL) {
        return root;
    }

    // Second base case -> if key is present in BST
    if(root -> data == key) {
        // Kuch kcuh karna hai

        // if left of root and right of root is null
        if(root -> left == NULL && root -> right == NULL) {
            delete root;
            return NULL;
        }

        // if left of root is not null and right of root is equal to null
        if(root -> left != NULL && root -> right == NULL) {
            BinaryTreeNode<int>* temp = root -> left;
            delete root;
            return temp;
        }

        // if left of root is null and right of root is not null
        if(root -> left == NULL && root -> right != NULL) {
            BinaryTreeNode<int>* temp = root -> right;
            delete root;
            return temp;
        }

        // if left and right of the root is not null
        if( root -> left != NULL && root -> right != NULL) {
            int maxi = maxValue(root -> left) -> data;
            root -> data = maxi;
            root -> left = deleteNode(root -> left, maxi);

            return root;
        }
    }

    // left call
    if(root -> data > key) {
        root -> left = deleteNode(root -> left, key);
        return root;
    } // right call
    else {
        root -> right = deleteNode(root -> right, key);
        return root;
    }
}
