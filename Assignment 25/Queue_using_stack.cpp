#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

class queue{
    node *front, *rear;
    public:
        queue(){
            front = rear = NULL;
        }
    void insert(int);
    int del();
    void display();
    // ~queue();    
};

void queue::insert(int item){
    node *curr = new node;
    curr -> data = item;
    curr -> next = NULL;

    if(rear == NULL){
        rear = front = curr;
        return;
    }
    else
    {
        rear -> next = curr;
        rear = curr;
    }
}

int queue :: del(){
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return -333;
    }

    else
    {
        node *temp = front;
        front = front -> next;
        int x = temp -> data;
        delete temp;
        return x;
    }  
}

void queue::display(){
    if (front == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        node *temp = front;
        while (temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
    }   
}

int main(){
    queue qu;
    int choice = 1;
    
    while (choice)
    {
        cout << "1. insert \t 2. delete \t 3. Display \t 4.Exit" << endl;
        cout << "Enter your choice ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            int n;
            cout << "Enter the item" << endl;
            cin >> n;
            qu.insert(n);
            break;
        
        case 2:
            qu.del();
            cout << "The element is poped";
            break;

        case 3:
            cout << "The list is: " <<endl;

            qu.display();
            break;

        case 4:
            exit(1);
            break;

        default:
            cout << "Enter a valied input" << endl;
            break;
        }
    }   
    return 0;
}