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

int main(){

    Stack st;
    string s1, s2;
    int j,c;

    cout << "Enter the expression" << endl;
    cin >> s1;

    int l = s1.length();

    for (int i = 0; i < l/2; i++)
    {
        char t = s1[i];
        s1[i] = s1[l - i - 1];
        s1[l - i - 1] = t;
    }

    while (s1[j] != '\0')
    {
        if (s1[j] >= '0' && s1[j] <= '9')
        {
            int x = s1[j] - 48;
            st.push(x);
        }

        else if (s1[j] == '+' || s1[j] == '-' || s1[j] == '*' || s1[j] == '/')
        {
            int a = st.pop();
            int b = st.pop();

            switch (s1[j])
            {
            case '+':
                 c = b + a;
                st.push(c);
                break;
            case '-':
                 c = b + a;
                st.push(c);
                break;
            case '*':
                 c = b + a;
                st.push(c);
                break;
            case '/':
                 c = b + a;
                st.push(c);
                break;
            
            default:
                break;
            }
        }
        
        j++;
    }
    
    cout << st.peek() << endl;
    return 0;
}