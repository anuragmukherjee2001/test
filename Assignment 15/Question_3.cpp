#include<iostream>

using namespace std;

void copy(char s1[], char s2[], int i){
    s2[i] = s1[i];
    if (s1[i] == '\0')
    {
        return;
    }
    copy(s1, s2, i + 1);
}

int main(){
    char s1[100], s2[100];
    int i = 0;
    cout << "Enter the first string" << endl;
    cin >> s1;

    copy(s1, s2, i);
    cout << s2;
    
    
    return 0;
}