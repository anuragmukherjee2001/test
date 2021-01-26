#include <iostream>

using namespace std;

struct node
{
    node *left;
    int data;
    int height;
    node *right;
};

class tree
{
public:
    node *new_node(int item)
    {
        node *ptr = new node();
        ptr->data = item;
        ptr->left = NULL;
        ptr->right = NULL;
        ptr->height = 1;
        return ptr;
    }

    node *rotate_left(node *x)
    {
        node *y = x->right;
        node *temp = y->left;
        y->left = x;
        x->right = temp;
        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
        return y;
    }

    node *rotate_right(node *x)
    {
        node *y = x->left;
        node *temp = y->right;
        y->right = x;
        x->left = temp;
        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
        return y;
    }

    int getHeight(node *x)
    {
        if (x == NULL)
        {
            return 0;
        }
        else
        {
            return x->height;
        }
    }

    int getBalance(node *x)
    {
        if (x == NULL)
        {
            return 0;
        }
        else
        {
            return (getHeight(x->left) - getHeight(x->right));
        }
    }

    int max_of_two(int a, int b)
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

    node *insert(node *root, int key)
    {
        if (root == NULL)
        {
            return new_node(key);
        }
        if (key < root->data)
        {
            root->left = insert(root->left, key);
        }
        else if (key > root->data)
        {
            root->right = insert(root->right, key);
        }
        else
        {
            return root;
        }

        root->height = 1 + max_of_two(getHeight(root->left), getHeight(root->right));

        int bf = getBalance(root);

        if (bf < -1 && key > root->right->data)
        {
            return rotate_left(root);
        }
        if (bf < -1 && key < root->right->data)
        {
            root->right = rotate_right(root->right);
            return rotate_left(root);
        }
        if (bf > 1 && key < root->left->data)
        {
            return rotate_right(root);
        }
        if (bf > 1 && key > root->left->data)
        {
            root->left = rotate_left(root->left);
            return rotate_right(root);
        }
        return root;
    }

    void preOrder(node *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }

    int search(node *root, int key)
    {
        if (root == NULL)
        {
            return 0;
        }
        while (root != NULL)
        {
            if (root->data == key)
            {
                return 1;
            }
            else if (key < root->data)
            {
                root = root->left;
            }
            else
            {
                root = root->right;
            }
        }
        return 0;
    }

    node *delete_node(node *root, int key)
    {
        if (root == NULL)
        {
            return root;
        }

        if (key < root->data)
        {
            root->left = delete_node(root->left, key);
            return root;
        }
        else if (key > root->data)
        {
            root->right = delete_node(root->right, key);
            return root;
        }

        if (root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        else if (root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }

        else
        {

            node *succParent = root;

            node *succ = root->right;
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

        root->height = max_of_two(getHeight(root->left), getHeight(root->right)) + 1;

        int bf = getBalance(root);

        if (bf < -1 && key > root->right->data)
        {
            return rotate_left(root);
        }
        if (bf < -1 && key < root->right->data)
        {
            root->right = rotate_right(root->right);
            return rotate_left(root);
        }
        if (bf > 1 && key < root->left->data)
        {
            return rotate_right(root);
        }
        if (bf > 1 && key > root->left->data)
        {
            root->left = rotate_left(root->left);
            return rotate_right(root);
        }
        return root;
    }
};

int main()
{

    tree T;
    node *root = NULL;
    int ch = 1;

    while (ch)
    {
        cout << endl;

        cout << "Press 1 for insertion of an element " << endl;
        cout << "Press 2 for preorder traversal" << endl;
        cout << "Press 3 for searching an item" << endl;
        cout << "Press 4 to delete an item" << endl;
        cout << "Press 5 to get the height of the tree" << endl;
        cout << "Press 0 to exit" << endl;

        cin >> ch;

        switch (ch)
        {
        case 1:
            int ele;
            cout << "Enter the element";
            cin >> ele;
            root = T.insert(root, ele);
            break;

        case 2:
            cout << "The tree is: " << endl;
            T.preOrder(root);
            break;

        case 3:
            int s_ele;
            cout << "Enter the element to find";
            cin >> s_ele;
            if (T.search(root, s_ele))
            {
                cout << "The element is found";
            }
            else
            {
                cout << "The element is absent";
            }
            break;

        case 4:
            int i;
            cout << "Enter an item to delete" << endl;
            cin >> i;
            T.delete_node(root, i);
            break;

        case 5:
            cout << "The height of the tree is" << endl;
            cout << T.getHeight(root);
            break;

        case 0:
            exit(1);
            break;

        default:
            cout << "Enter a valied output" << endl;
            break;
        }
    }

    // root = T.insert(root, 22);
    // T.insert(root, 35);
    // T.insert(root, 53);
    // T.insert(root, 10);
    // T.insert(root, 11);
    // T.insert(root, 103);
    // T.preOrder(root);
    // // cout << endl
    // //      << T.getHeight(root);

    // cout << endl
    //      << T.search(root, 100);
    return 0;
}