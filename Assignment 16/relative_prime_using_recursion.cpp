#include<iostream>
using namespace std;

bool relative_prime(int x, int y){

    if (x == 1 || y == 1)
    {
        return true;
    }

    if (x != 1 && y != 1 && x == y)
    {
        return false;
    }
    
    if (x != 1 && y != 1 && x < y)
    {
        return relative_prime(x, y - x);
    }

    if(x != 1 && y != 1 && x > y)
    {
        return relative_prime(x - y, y);
    } 
}

int main()
{
    int x, y;

    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    
    if (relative_prime(x, y) == true)
    {
        cout << "The numbers are relative prime" << endl;
    }

    else
    {
        cout <<  "The numbers are not relative prime" << endl;
    }
    
    
    return 0;
}