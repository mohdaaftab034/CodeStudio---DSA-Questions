// Problem - https://www.naukri.com/code360/problems/identical-trees_799364?interviewProblemRedirection=true&practice_topic%5B%5D=Breadth-first%2520Search&practice_topic%5B%5D=Depth-first%2520Search&leftPanelTabValue=PROBLEM&count=25&page=2&search=&sort_entity=order&sort_order=ASC&customSource=studio_nav




// -----------------Solution--------------------
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

    class BinaryTreeNode {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
		
        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

***********************************************************/

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    if(root1 == NULL && root2 == NULL) return true;

    if(root1 == NULL || root2 == NULL) return false;

    if(root1->data != root2->data) return false;

    return identicalTrees(root1->left, root2->left) && identicalTrees(root1->right, root2->right); 	 
}
