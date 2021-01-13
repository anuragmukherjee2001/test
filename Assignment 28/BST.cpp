#include <iostream>
#include <vector>

using namespace std;

class BST
{
public:
    int data;
    BST *left, *right;

    BST()
    {
        data = 0;
        left = left = NULL;
    }

    BST(int item)
    {
        data = item;
        left = right = NULL;
    }

    BST *insert(BST *root, int item)
    {
        if (root == NULL)
            return new BST(item);
        else
        {
            BST *temp = root;
            BST *par = NULL;
            while (temp != NULL)
            {
                par = temp;
                if (item < temp->data)
                    temp = temp->left;
                else
                    temp = temp->right;
            }
            if (item < par->data)
                par->left = new BST(item);
            else
                par->right = new BST(item);
        }
        return root;
    }

    void inorder(BST *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
    }

    // void inorder_vec(BST *root, int arr[])
    // {
    //     static int c = 0;

    //     if (root == NULL)
    //     {
    //         return;
    //     }
    //     else
    //     {
    //         inorder(root->left);
    //         arr[c++] = root->data;
    //         inorder(root->right);
    //     }
    //
    // }

    void postorder(BST *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
        }
    }
    void preorder(BST *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            cout << root->data << " ";
            preorder(root->left);
            preorder(root->right);
        }
    }

    int smallest(BST *root)
    {
        if (root == NULL)
        {
            return INT_MAX;
        }
        else
        {
            while (root->left != NULL)
            {
                root = root->left;
            }
            return root->data;
        }
    }

    int largest(BST *root)
    {
        if (root == NULL)
        {
            return INT_MIN;
        }
        else
        {
            while (root->right != NULL)
            {
                root = root->right;
            }
            return root->data;
        }
    }

    int totalNodes(BST *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        else
        {
            return totalNodes(root->left) + totalNodes(root->right) + 1;
        }
    }

    int externalNodes(BST *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        else if (root->left == NULL && root->right == NULL)
        {
            return 1;
        }

        else
        {
            return externalNodes(root->left) + externalNodes(root->right);
        }
    }

    int internalNodes(BST *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        else if (root->left == NULL && root->right == NULL)
        {
            return 0;
        }

        else
        {
            return externalNodes(root->left) + externalNodes(root->right) + 1;
        }
    }

    int max(int a, int b)
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }

    int height(BST *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        return (max(lh, rh) + 1);
    }

    // vector<int> ins(BST *root)
    // {

    //     vector<int> tree;
    //     if (root == NULL)
    //     {
    //         return tree;
    //     }
    //     else
    //     {
    //         tree.push_back(root->data);
    //         ins(root->left);
    //         ins(root->right);
    //     }
    //     return tree;
    // }

    BST *deleteNode(BST *root, int key)
    {
        if (root == NULL)
        {
            return root;
        }

        if (key < root->data)
        {
            root->left = deleteNode(root->left, key);
            return root;
        }
        else if (key > root->data)
        {
            root->right = deleteNode(root->right, key);
            return root;
        }

        if (root->left == NULL)
        {
            BST *temp = root->right;
            delete root;
            return temp;
        }

        else if (root->right == NULL)
        {
            BST *temp = root->left;
            delete root;
            return temp;
        }

        else
        {

            BST *succParent = root;

            BST *succ = root->right;
            while (succ->left != NULL)
            {
                succParent = succ;
                succ = succ->left;
            }

            if (succParent != root)
            {
                succParent->left = succ->right;
            }
            else
            {
                succParent->right = succ->right;
            }

            root->data = succ->data;

            delete succ;
            return root;
        }
    }
};

int main()
{
    // cout << "Hello world";
    BST b;
    BST *root = NULL;
    int ele;

    int ch = 1;
    while (ch)
    {
        cout << endl;

        cout << "Press 1 for insertion of an element " << endl;
        cout << "Press 3 for inorder traversal" << endl;
        cout << "Press 4 for postorder traversal" << endl;
        cout << "Press 5 for preorder traversal" << endl;
        cout << "Press 6 for finding the smallest element" << endl;
        cout << "Press 7 for finding the largest element" << endl;
        cout << "Press 8 for finding the total number of nodes" << endl;
        cout << "Press 9 for finding the total number of external nodes" << endl;
        cout << "Press 10 for finding the total number of internal nodes" << endl;
        cout << "Press 11 for finding the height of the tree" << endl;
        cout << "Press 12 to delete a node " << endl;
        cout << "Press 0 to exit the program " << endl;

        cin >> ch;

        switch (ch)
        {

        case 1:
            cout << "Enter the root element";
            cin >> ele;
            root = b.insert(root, ele);
            break;

            // case 2:
            //     cout << "Enter the value to insert " << endl;
            //     int item;
            //     cin >> item;
            //     b.insert(root, item);
            //     break;

        case 3:
            b.inorder(root);
            break;

        case 4:
            b.postorder(root);
            break;

        case 5:
            b.preorder(root);
            break;

        case 6:
            cout << "The smallest element is " << b.smallest(root);
            break;

        case 7:
            cout << "The largest element is " << b.largest(root);
            break;

        case 8:
            cout << "The total number of nodes are " << b.totalNodes(root);
            break;

        case 9:
            cout << "The total number of external nodes are " << b.externalNodes(root);
            break;

        case 10:
            cout << "The total number of internal nodes are " << b.internalNodes(root);
            break;

        case 11:
            cout << "The height of the BST is: " << b.height(root);
            break;

        case 12:
            cout << "Enter the element to delete " << endl;
            int item_del;
            cin >> item_del;
            b.deleteNode(root, item_del);
            break;

        case 0:
            exit(1);

        default:
            cout << "Enter a valied input" << endl;
            break;
        }
    }

    return 0;
}