// Problem - https://www.naukri.com/code360/problems/tree-height_4609628?interviewProblemRedirection=true&search=height%20o&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC




// ------------------Solution----------------------
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int heightOfBinaryTree(TreeNode<int> *root)
{
	if (root == NULL) return 0;

    int left_height = heightOfBinaryTree(root -> left);
    int right_height = heightOfBinaryTree(root -> right);

    return 1 + max(left_height, right_height);
}
