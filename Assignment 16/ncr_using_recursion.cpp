#include<iostream>

using namespace std;

int nCr(int n, int r){
    if (n == 0 || r == 0)
    {
        return 1;
    }
    if (r == n)
    {
        return 1;
    }
    if (r == 1)
    {
        return n;
    }
    else
    {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

int main(){

    int n, r;
    
    cout << "Enter the value of n and r" << endl;
    cin >> n >> r;

    cout << nCr(n, r);

    return 0;
}