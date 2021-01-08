#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LL
{
public:
    node *head;
    LL()
    {
        head == NULL;
    }
    void insertSorted(double);
    double delBeg();
    bool isEmpty();
};

void LL::insertSorted(double item)
{
    node *curr = new node();
    curr->data = item;

    node *temp = head, *prev;

    while (temp != NULL && temp->data < item)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        curr->next = head;
        head = curr;
        return;
    }
    prev->next = curr;
    curr->next = temp;
}

double LL::delBeg()
{
    if (head == NULL)
    {
        return -2666;
    }
    else
    {

        double temp = head->data;

        node *temp1 = head;
        head = head->next;
        return temp;
        // delete temp1;
    }
}

bool LL::isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void bucketSort(double arr[], int n)
{
    LL l[10];
    for (int i = 0; i < n; i++)
    {
        int digit = arr[i] * 10;
        l[digit].insertSorted(arr[i]);
    }
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        while (!l[i].isEmpty())
        {
            arr[j++] = l[i].delBeg();
        }
    }
}

int main()
{
    double arr[] = {0.12, 0.23, 0.16, 0.27, 0.24, 0.23, 0.05, 0.01, 0.17, 0.89};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}