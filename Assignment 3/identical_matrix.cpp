#include<iostream>

using namespace std;



int main(){
    int x[20][20], y[20][20], row, col, c;

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

    cout << "Give the number of rows of Matrix 2 " << endl;
    cin >> row;

    cout << " Give the number of columns of Matrix 2 " << endl;
    cin >> col;

    cout << "Enter the elements " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> y[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (x[i][j] != y[i][j])
            {
                c++;
            }    
        }
        
    }
    if (c == 1)
    {
        cout << "They are not identical";
    }
       
    else
    {
        cout << "They are same";
    }
    
    return 0;
}