#include<iostream>
#define max 20

using namespace std;

// void convertSperse(int a[][]){


// }

int main(){

    int row, col, a[20][20], s[20][3];

    cout << "Enter the rows of the matrix " << endl;
    cin >> row;

    cout << "Enter the column of the matrix " << endl;
    cin >> col;

    cout << "Enter the matrix "<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
        
    }
    
}