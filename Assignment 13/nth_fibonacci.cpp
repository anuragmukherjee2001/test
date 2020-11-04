#include<iostream>

using namespace std;

int fibo(int n){
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n - 2);
    }
}

int main(){
    cout << "Enter the number of which you want the fibonacci";
    
    int x;
    cin >> x;
    
    int a = fibo(x);
    cout << a << endl;
    return 0;
}