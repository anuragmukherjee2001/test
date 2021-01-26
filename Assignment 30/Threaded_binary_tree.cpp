#include <iostream>

using namespace std;

struct node
{
    bool lthread;
    node *left;
    int data;
    node *right;
    bool rthread;
};

class TBT
{
    node *root = NULL;

public:
    node *new_node(int key)
    {
        node *ptr = new node();

        ptr->data = key;
        ptr->lthread = true;
        ptr->rthread = true;
        return ptr;
    }

    node *insert(node *root, int key)
    {
        if (root == NULL)
        {
            root = new_node(key);
            root->left = NULL;
            root->right = NULL;
            return root;
        }

        node *temp = root;
        node *parent = NULL;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Duplicate elements" << endl;
                return root;
            }
            else if (key < temp->data)
            {
                if (temp->lthread == false)
                {
                    temp = temp->left;
                }
                else
                    break;
            }
            else
            {
                if (temp->rthread == false)
                {
                    temp = temp->right;
                }
                else
                    break;
            }

            node *curr = new_node(key);
            if (key < parent->data)
            {
                curr->left = parent->left;
                curr->right = parent;
                parent->left = curr;
                parent->lthread = false;
            }
            else
            {
                curr->left = parent;
                curr->right = parent->right;
                parent->right = curr;
                parent->rthread = false;
            }
        }
        return root;
    }

    node *inorderSucc(node *x)
    {
        if (x->rthread == true)
        {
            return x->right;
        }
        x = x->right;
        while (x->lthread != true)
        {
            x = x->left;
        }
        return x;
    }

    node *inorderTraversal(node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        node *temp = root;
        while (temp->left != NULL)
        {
            temp = temp->left;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = inorderSucc(temp);
        }
    }
};

int main()
{
    TBT tree;
    node *root = NULL;
    int ch = 1;

    while (ch)
    {
        cout << endl;
        cout << "Enter your choice" << endl;
        cout << "Press 1 to insert" << endl;
        cout << "Press 2 to show" << endl;
        cout << "Press 0 to exit" << endl;

        cin >> ch;

        switch (ch)
        {
        case 1:
            int item;
            cout << "Enter the item";
            cin >> item;
            root = tree.insert(root, item);
            break;

        case 2:
            cout << "The tree is: " << endl;
            tree.inorderTraversal(root);
            break;

        case 0:
            exit(1);
            break;

        default:
            cout << "Enter a valied input";
            break;
        }
    }

    return 0;
}