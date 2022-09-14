// 148. Code : Count leaf nodes: Given a generic tree, count and return the number of leaf nodes present in the given tree.

/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

int getLeafNodeCount(TreeNode<int> *root)
{

    if (!root)
    {

        return NULL;
    }

    if (!root->children.size())
    {

        return 1;
    }

    int lnodes = 0;

    for (int i = 0; i < root->children.size(); i++)
    {

        lnodes += getLeafNodeCount(root->children[i]);
    }

    return lnodes;
}