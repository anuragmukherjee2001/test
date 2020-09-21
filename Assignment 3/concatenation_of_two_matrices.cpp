#include<iostream>
using namespace std;

int main(){
    int x[20][20], y[20][20], row, col, c;

    cout << "Give the number of rows of Matrix " << endl;
    cin >> row;

    cout << " Give the number of columns of Matrix " << endl;
    cin >> col;

    cout << "Enter the elements " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> x[i][j];
        }
    }

    cout << "Enter the elements " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> y[i][j];
        }
    }

    int z[row][col * 2];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            z[i][j] = x[i][j];

            z[i][j + col] = y[i][j];
        }
        
    }

    cout << "After concatenation" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col * 2; j++)
        {
            cout << z[i][j] << " ";
        }
        cout << endl;
    }  

    return 0;
}    