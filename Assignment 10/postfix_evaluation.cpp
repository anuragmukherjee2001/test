#include <iostream>
#include <stdlib.h>
#include <string.h>

#define max 40

using namespace std;

class Stack{
    
    public:

    char arr[max];
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

    void push(char item){
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


int precendence(char c){

    if (c == '*' || c == '/')
    {
        return 1;
    }

    else if (c == '+' || c == '-')
    {
        return 0;
    }

    else
    {
        return -222;
    } 
}


// the program is not completed till now