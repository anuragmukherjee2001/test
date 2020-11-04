#include<iostream>
#include<stdlib.h>

using namespace std;

int fact(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
    
}

int main(){
    cout << "Enter the number of the factorial (MAX = 8)";
    int n;
    cin >> n;
    
    if (n < 0 && n > 8)
    {
        cout << "Enter the number in the given range"<< endl;
        exit(1);
    }
    
    int p = fact(n);
    cout << p << endl;
    return 0;
}