#include<iostream>

using namespace std;

int main(){
    int x[20][20], row, col, c;

    cout << "Give the number of rows of Matrix 1 " << endl;
    cin >> row;

    cout << " Give the number of columns of Matrix 1 " << endl;
    cin >> col;

    cout << "Enter the elements " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> x[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }

    cout << "The transpose of the matrix is "<< endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << x[j][i];
        }
        cout << endl;
    }

    return 0;
 }   
