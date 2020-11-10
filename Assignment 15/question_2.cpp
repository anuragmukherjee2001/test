#include<iostream>
// #include<string.h>

using namespace std;

char first_upper(string str, int i = 0){
    // int i = str.length();
    if (str[i] == '\0')
    {
        return 0;
    }
    if (str[i] <= 'Z' && str[i] >= 'A')
    {
        return str[i];
    }
    else
    {
        return first_upper(str, i + 1);
    }  
}

int main(){

    string str;
    int n;

    cout << "Enter the string" << endl;
    cin >> str;
    n = str.length();

    char res = first_upper(str);

    cout << res;
    return 0;
}