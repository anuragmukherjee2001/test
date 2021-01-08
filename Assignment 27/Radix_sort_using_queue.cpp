#include <iostream>
#include <stdlib.h>

#define max 5

using namespace std;

class Lin_Queue
{
public:
    int arr[max];
    int front;
    int rear;

    Lin_Queue()
    {

        front = 0;
        rear = 0;
    }

    bool isFull()
    {
        if (rear == max - 1)

            return true;

        else

            return false;
    }

    bool isEmpty()
    {
        if (front == rear)

            return true;

        else

            return false;
    }

    void enqueue(int item)
    {

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

    int dequeue()
    {
        if (!isEmpty())
        {
            front++;
            return arr[front];
        }

        else
        {
            cout << "The Queue is underflow" << endl;
            return -333;
        }
    }

    void display()
    {
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
};

int getMax(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    return arr[0];
}

void radixSort(int arr[], int n)
{
    Lin_Queue q[10];
    int m = getMax(arr, n);
    for (int pow = 1; m / pow > 0; pow = pow * 10)
    {
        for (int i = 0; i < 0; i++)
        {
            int digit = (arr[i] / pow) % pow;
            q[digit].enqueue(arr[i]);
        }
        int j = 0;
        for (int i = 0; i < 10; i++)
        {
            while (!q[i].isEmpty())
            {
                arr[j++] = q[i].dequeue();
            }
        }
    }
}

int main()
{
    int arr[] = {12,
                 22,
                 56,
                 34,
                 46,
                 46,
                 13,
                 19,
                 50};

    int n = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}