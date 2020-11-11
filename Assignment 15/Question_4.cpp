#include<iostream>
#include<string.h>

using namespace std;

int isPalindrome(char s[], int left, int right){
    if (left == right){
        return 1;
    }

    if (s[left] != s[right])
    {
        return 0;
    }

    if (left < right + 1)
    {
        return isPalindrome(s, left + 1, right - 1);
    }

    else
    {
        return 1;
    }
}



int main(){


    char s[100];
    cout << "Enter the string" << endl;
    cin >> s;
    int n = strlen(s);

    if (isPalindrome(s, 0, n - 1))
    {
        cout << "The string is palindrome";
    }
    else
    {
        cout << "The string is not palindrome";
    }
    
    return 0;
}