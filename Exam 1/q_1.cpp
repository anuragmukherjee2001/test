#include<iostream>
#include<stdlib.h>

#define max 5

using namespace std;

class Queue{
    public:
    int arr[max];
    int front;
    int rear;

    Queue(){
    
    front = 0;
    rear = 0;
    }

    bool isFull(){
        if (rear == max - 1)
        
            return true;
        

        else
        
            return false;
        
    }

    bool isEmpty(){
        if (front == rear)
        
            return true;
        

        else
        
            return false;
        
    }

    void enqueue(int item){

        if (!isFull())
        {
            rear++;
            arr[rear] = item;
        }

        else
        {
            cout << "Queue is full" << endl;
        }
    }

    int dequeue(){
        if (!isEmpty())
        {
            front++;
            return arr[rear];
        }

        else
        {
            cout << "The Queue is underflow" << endl;
            return -333;
        }
    }

    void display(){
        if (!isEmpty())
        {
            for (int i = front + 1; i <= rear; i++)
            {
                cout << arr[i] << "   ";
            }
        }

        else
        {
            cout << "The Queue is Empty" << endl;
        }   
    }

    int peek(){
        if (!isEmpty())
    
            return arr[front];
    
        else
    
            cout << "Stack is Empty" << endl;
               
    }
};

int main(){

    Queue q1;
    Queue q2;



    int n1,n2, count;
    cout << "Enter the number of elements in 1st queue" << endl;
    cin >> n1;
    cout << "Enter the number of elements in 2nd queue" << endl;
    cin >> n2;

    if (n1 != n2)
    {
        cout << "The size of the stack is not same" << endl;
        exit(1);
    }

    cout << "Enter the elements for queue 1" << endl;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        q1.enqueue(x);
    }
    
    cout << "Enter the elements for queue 2" << endl;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        q2.enqueue(x);
    }

    while (!q1.isEmpty())
    if (q1.peek() == q2.peek())
    {
        q1.dequeue();
        q2.dequeue();
        cout << "The content is same" << endl;
    }
    else
    {
       cout << "The contents are not equal" << endl;
            break; 
    }
    
    
    return 0;
}