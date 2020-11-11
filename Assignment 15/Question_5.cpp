#include <iostream>

using namespace std;

int palindrome(int n, int temp){
    if (n == 0)
    {
        return temp;
    }

    temp = (temp * 10) + (n % 10);

    return palindrome(n / 10, temp);
    
}

int main(){
    int n;

    cout << "Enter the number" << endl;
    cin >> n;

    int temp;

    temp = palindrome(n, 0);

    if (temp == n)
    {
        cout << "The number is palindrome" << endl;
    }

    else
    {
        cout << "The number is not palindrome" << endl;
    }
    return 0;
}