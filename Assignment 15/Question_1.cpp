#include <iostream>
// #include<string.h>

using namespace std;

int isConsonant(char ch){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

int totConsonants(string str, int n){
    if (n == 1)
    {
        return isConsonant(str[0]);
    }
    else
    {
        return totConsonants(str, n - 1) + isConsonant(str[n - 1]);
    }
}

int main(){

    string str;
    int n;

    cout << "Enter the string inlowercase" << endl;
    cin >> str;
    n = str.length();


    cout << totConsonants(str, n);
    return 0;
}