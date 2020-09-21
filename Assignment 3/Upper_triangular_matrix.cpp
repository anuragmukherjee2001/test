#include<iostream>

using namespace std;

int main(){

    int x[20][20], row, column;

    cout << "Give the number of rows " << endl;
    cin >> row;

    cout << " Give the number of columns " << endl;
    cin >> column;

    cout << "Enter the elements " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> x[i][j];
        }
    }

    cout << " The lower triangular matrix is" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i < j)
            {
                cout << 0;
            }
            else
            {
                cout << x[i][j];
            }  
            cout << " "; 
        }  
        cout << endl; 
    }
 return 0;   
}