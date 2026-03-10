// Problem - https://www.naukri.com/code360/problems/insert-into-a-binary-search-tree_1279913?interviewProblemRedirection=true&search=pre&practice_topic%5B%5D=Binary%2520Search%2520Trees&count=25&page=1&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM




// **********************Solution***************************
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Base case
    if(root == NULL) {
        TreeNode<int>* newNode = new TreeNode<int>(val);
        return newNode;
    }

    // there are two case
    // Go to left
    if(root -> val > val) {
        root -> left = insertionInBST(root -> left, val);
    }
    // Go to right
    else{
        root -> right = insertionInBST(root -> right, val);
    }
}
