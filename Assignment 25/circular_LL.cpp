#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class CLL
{
    node *last;

public:
    CLL()
    {
        last = NULL;
    }

    void addBeginning(int);
    void addEnd(int);
    void display();
    void delBeginning();
    void delEnd();
};

void CLL::addBeginning(int item)
{
    node *curr = new node;
    curr->data = item;
    if (last == NULL)
    {
        curr->next = curr;
        last = curr;
    }
    curr->next = last->next;
    last->next = curr;
}

// wrong

void CLL::addEnd(int item)
{
    node *curr = new node;
    curr->data = item;
    if (last == NULL)
    {
        curr->next = curr;
        last = curr;
    }
    // curr->next;
    curr->next = last->next;
    last->next = curr;
    last = curr;
}

// wrong

void CLL::display()
{
    if (last == NULL)
    {
        cout << "List is empty";
        return;
    }
    node *temp = last->next;
    while (temp != last)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data;
}

void CLL ::delBeginning()
{
    if (last == NULL)
    {
        cout << "Empty list";
        return;
    }

    if (last == last->next)
    {
        delete last;
        last = NULL;
        return;
    }
    node *temp = last->next;
    last->next = temp->next;
    delete temp;
}

void CLL::delEnd()
{
    if (last == NULL)
    {
        cout << "Empty list";
        return;
    }
    if (last == last->next)
    {
        delete last;
        last = NULL;
        return;
    }
    node *temp = last->next;
    while (temp->next != last)
    {
        temp = temp->next;
    }
    temp->next = last->next;
    delete last;
    last = temp;
}

int main()
{
    CLL l1;

    int choice = 1;

    while (choice)
    {
        cout << endl;

        cout << "1. Add at the beginning \t 2. Add at the end \t 3. Display \t 4. Delete at the beginning \t 5. Delete at the end \t 6. Exit" << endl;
        cout << "Enter your choice";

        cin >> choice;

        switch (choice)
        {
        case 1:
            int n;
            cout << "Enter the item " << endl;
            cin >> n;
            l1.addBeginning(n);
            break;

        case 2:
            int m;
            cout << "Enter the item " << endl;
            cin >> m;
            l1.addEnd(m);
            break;

        case 3:
            cout << "The list is: " << endl;
            l1.display();
            break;

        case 4:
            l1.delBeginning();
            cout << "The element at the beginning is deleted";
            break;

        case 5:
            l1.delEnd();
            cout << "The element at the end is deleted";
            break;

        case 6:
            exit(1);
            break;

        default:
            cout << "Enter a valied input" << endl;
            break;
        }
    }
    return 0;
}