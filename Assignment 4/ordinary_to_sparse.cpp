#include<iostream>
#define max 20

using namespace std;

void convertSperse(int a[20][20], int row, int col, int s[max][3]){

    // int s[max][3];
    int k = 1;
    s[0][0] = row;
    s[0][1] = col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] != 0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
            }
            s[0][2] = k - 1;  
        }    
    }  
}

void print_s(int s[max][3]){

        int col;
        col = s[0][2];
        cout << "The sparse matrix is" << endl;

        for (int i = 0; i <= col; i++)
        {
            cout << s[i][0] << "  " << s[i][1] << "  " << s[i][2] << endl;
        }
        
     }

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

    cout << "Printing the matrix" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }

    convertSperse(a, row, col, s);
    print_s(s);   
}