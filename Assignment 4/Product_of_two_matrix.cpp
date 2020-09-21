#include<iostream>

using namespace std;

int main(){

    int a[20][20], b[20][20], c[20][20], row, col;

    cout << "Enter the rows of the first matrix ";
    cin >> row;

    cout << "Enter the column of the first matrix ";
    cin >> col;

    cout << "enter the first matrix " << endl;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
        
    }

    cout << "Enter the rows of the second matrix ";
    cin >> row;

    cout << "Enter the column of the second matrix ";
    cin >> col;

    cout << "enter the second matrix " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
        
    }

    cout << "The result is: "<< endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < row; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << c[i][j] << "   ";
        } 
        cout << endl;   
    }

    return 0;   
}