#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

class Stack{
    public:
    node *top;

    Stack(){
        top = NULL;
    }
  
    void push(int);
    void pop();
    void display();
    void peek();
};

void Stack :: push(int item){
    node *curr = new node;
    curr -> data = item;
    curr -> next = top;
    top = curr;
}

void Stack::pop(){
    if (top == NULL)
    {
        cout << "Stack is Empty";
        return;
    }
    node *temp = top;
    top = top -> next;
    int x = temp -> data;
    delete temp;
  
}

void Stack::display(){
    if (top == NULL)
    {
        cout << "List is empty";
        return;
    }

    node *temp = top;
    while (temp!= NULL)
    {
        cout << temp -> data << endl;
        temp = temp -> next;
    }  
}

void Stack::peek(){
    if(top==NULL){
			cout<<"underflow condition...."<<endl;
			return;
		}
		cout << top -> data<<endl;
}

int main(){
    Stack st;
    int choice = 1;
    
    while (choice)
    {
        cout << "1. Push \t 2. Pop \t 3. Display \t 4.Exit \t 5. Peek" << endl;
        cout << "Enter your choice";

        cin >> choice;

        switch (choice)
        {
        case 1:
            int n;
            cout << "Enter the item " << endl;
            cin >> n;
            st.push(n);
            break;
        
        case 2:
            st.pop();
            cout << "The element is poped";
            break;

        case 3:
            cout << "The list is: " <<endl;

            st.display();
            break;

        case 5:
            cout << endl;
            cout << "The element is" << endl;
            st.peek();
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