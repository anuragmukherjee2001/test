#include <iostream>
#include <stdlib.h>

#define max 4

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
        top++;
        arr[top] = item;
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
            int x = arr[top];
            top--;
            return x;
        }
        else
        
            cout << "Stack is Empty" << endl;
        
    }       
};


int main(){
    int ch;
    Stack s1;

    while (1)
    {
        cout << "1. Insert \t 2. Pop \t 3. Display \t 4. Peek \t 5. Exit" << endl;
        cout << "Enter Your Choice" << endl;

        cin >> ch;

        switch (ch)
        {
            case 1:

                if (!s1.isFull())
                {
                    cout << "Enter the Item" << endl;
                    int item;

                    cin >> item;

                    s1.push(item);
                }

                else
                {
                    cout << "Stack is full" << endl;
                }
                break;

            case 2:

                s1.pop();
                break;

            case 3:

                s1.display();
                break;

            case 4:

                cout << s1.peek() << endl;
                break;

            case 5:

                exit(1);    

            default:

                cout << "Enter a right choice" << endl;                           
        }
    } 
}