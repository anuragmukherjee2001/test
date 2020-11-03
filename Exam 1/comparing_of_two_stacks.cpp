#include <iostream>
#include <stdlib.h>
#include <string.h>

#define max 40

using namespace std;

class Stack{
    
    public:

    int arr[max];
    int top;
    
    Stack(){
        top = -1;
    }


    bool isEmpty(){
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }    

    bool isFull(){
        if (top == max - 1)
        
            return true;
        
        else
        
            return false;
           
    }    

    void push(int item){
        if (top == max - 1)
        {
            cout << "stack is full";
        }
        
        else
        {
            top++;
            arr[top] = item;
        }
        
        
    }

    int peek(){
        if (!isEmpty())
    
            return arr[top];
    
        else
    
            cout << "Stack is Empty" << endl;
               
    }

    void display(){
        if (!isEmpty())
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }

        else
        {
            cout << "The Stack is Empty" << endl;
        }
        
    }
        
    int pop(){
        if (!isEmpty())
        {
            char x = arr[top];
            top--;
            return x;
        }
        else
        
            cout << "Stack is Empty" << endl;
        
    }       
};

int main(){
    Stack s1;
    Stack s2;

    int n1,n2;
    cout << "Enter the number of elements in 1st stack" << endl;
    cin >> n1;
    cout << "Enter the number of elements in 2nd stack" << endl;
    cin >> n2;

    if (n1 != n2)
    {
        cout << "The size of the stack is not same" << endl;
        exit(1);
    }
    
    cout << "Enter the elements for stack 1" << endl;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    
    cout << "Enter the elements for stack 2" << endl;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        s2.push(x);
    }

    
    
    while (!s1.isEmpty())
    {
        if (s1.peek() == s2.peek())
        {
            s1.pop();
            s2.pop();
            cout << "the content is same" << endl;
        }
        else
        {
            
            cout << "The contents are not equal" << endl;
            break;
            
        }
        
        
    }

    return 0;
    
}