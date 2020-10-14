#include<iostream>
using namespace std;

int main(){
    int num, sum = 0, temp;
    cout << "Enter the number ";
    cin >> num;
    temp = num;

    while(temp != 0){
        sum = sum + num % 10;
        temp = temp / 10;
    }

    cout << "The answer is " << sum;
    return 0;

}
