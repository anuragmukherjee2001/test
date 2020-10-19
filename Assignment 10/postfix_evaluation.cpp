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
        return -1;
    } 
};


// the program is not completed till now

int isOparator(char op){
    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        return 1;
    }

    else
    {
        return -1;
    }
}

int isOperand(char op){
    if (op >= '0' && op <= '9')
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
    
}

int getop(char op){
    int x;
    x = op;
    return int(x -'0');
}

int operation(int a, int b, char op){

    if (op == '+')
    {
        return b + a;
    }
    else if (op == '-')
    {
        return b - a;
    }
    else if (op == '*')
    {
        return b * a;
    }
    else if (op == '/')
    {
        return b / a;
    }
    else
    {
        return -22;
    } 
}

int main(){

    Stack st;
    string s1;
    int a, b;

    cout << "Enter the string" << endl;
    cin >> s1;

    int l = s1.length();

    for(int i = 0; i < l; i++){
        if (isOparator(i) != -1)
        {
            a = st.peek();
            st.pop();
            b = st.peek();
            st.pop();
            st.push(operation(a, b, i));

        }
        else if (isOperand(i) == 1)
        {
            st.push(getop(i));
        }
    }
    // st.pop();
    cout << st.top;
    
    return 0;
}