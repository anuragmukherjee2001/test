#include <iostream>
// #include "stack.cpp"
#include <stdlib.h>

#define max 4

using namespace std;

class Stacks{
    
    public:

    int arr[max];
    int top;
    
    Stacks(){
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
                cout << arr[i] << " ";
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

    Stacks s1;

    int num, item;

    cout << "Enter the number of items" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> item;
        s1.push(item);
    }

    s1.display();
    
    
    // s1.push();


}