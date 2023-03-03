#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    vector<int> inorder;
    TreeNode<int> *cur = root;
    while(cur != NULL)
    {
        //case-1 
        //left node not available
        if(cur->left == NULL)
        {
           inorder.push_back(cur->data);
           cur = cur->right; //move to right
        }
        else
        {
            //case-2
            //create a node to remember cur;
            TreeNode<int> * prev = cur->left;
            //means right node exists and thread not created yet
            while(prev->right && prev->right != cur)
            {
                prev= prev->right;
            }
            //when more right not possible
            if(prev->right == NULL)
            {
                //create thread with root
                prev->right = cur;
                //move to left
                cur=cur->left;
            }
            else
            {
                //now we remove the thread if already traversed and move to right
                prev->right = NULL;
                inorder.push_back(cur->data);
                cur=cur->right;
            }
        }
    }
    return inorder[k-1];
}
