#include<iostream>

#define max 20

using namespace std;

void print(){

    int c, s[max][3];
    for (int i = 0; i < s[0][0]; i++)
    {
        for (int j = 0; j < s[0][1]; j++)
        {
            c = 1;
            for (int k = 1; k <= s[0][2]; k++)
            {
                if (s[k][0] == i && s[k][1] == j)
                {
                    c = 0;
                    cout << s[k][2] << "     ";
                    break;
                }
                
            }

            if (c == 1)
            {
                cout << 0 << "     ";
            }    
        }
        cout << endl;
    }
    
}

int main(){

    int s[max][3];

    cout << "Enter the number of rows" << endl;
    cin >> s[0][0];

    cout << "Enter the total number of columns" << endl;
    cin >> s[0][1];

    cout << "Enter the number of elements" << endl;
    cin >> s[0][2];

    cout << "Enter the sparse matrix" << endl;

    for (int i = 0; i < s[0][2]; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> s[i][j];
        }    
    }

    cout << "The original matrix is" << endl;

    print();

    return 0;    
}