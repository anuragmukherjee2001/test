#include <iostream>

using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;
};

class DLL
{
public:
    node *head;
    DLL()
    {
        head = NULL;
    }
    void insertBeg(int);
    void insertEnd(int);
    void Display();
    void delBeg();
    void delEnd();
};

void DLL::insertBeg(int item)
{
    node *curr = new node();
    curr->data = item;
    curr->next = head;
    curr->prev = NULL;

    if (head != NULL)
    {
        head->prev = curr;
    }
    head = curr;
}

void DLL ::insertEnd(int item)
{
    node *curr = new node();
    curr->data = item;
    curr->next = NULL;
    if (head == NULL)
    {
        curr->prev = NULL;
        head = curr;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = curr;
    curr->prev = temp;
    return;
}

void DLL::Display()
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "UNDERFLOW " << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " <=> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void DLL::delBeg()
{
    if (head == NULL)
    {
        cout << "Empty list";
        return;
    }
    node *temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
        delete temp;
        return;
    }
}

void DLL::delEnd()
{
    if (head == NULL)
    {
        cout << "Empty List";
        return;
    }
    node *temp = head;
    node *ptr;
    if (head->next == NULL)
    {
        head = NULL;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    ptr = temp->prev;
    ptr->next = temp->next;

    delete temp;
}

int main()
{

    DLL l1;

    int choice = 1;

    while (choice)
    {
        cout << endl;

        cout << "1. Add at the beginning \t 2. Add at the end \t 3. Display \t 4. Delete at the beginning \t 5. Delete at the end \t 6. Exit" << endl;
        cout << "Enter your choice ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            int n;
            cout << "Enter the item " << endl;
            cin >> n;
            l1.insertBeg(n);
            break;

        case 2:
            int m;
            cout << "Enter the item " << endl;
            cin >> m;
            l1.insertEnd(m);
            break;

        case 3:
            cout << "The list is: " << endl;
            l1.Display();
            break;

        case 4:
            l1.delBeg();
            cout << endl;
            cout << "The element at the beginning is deleted";
            break;

        case 5:
            l1.delEnd();
            cout << endl;
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