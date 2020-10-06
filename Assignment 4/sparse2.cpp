#include<iostream>
using namespace std;

int s[20][3];

void print_matrix()

{

    int i,j,k,flg;

    for(i=0;i<s[0][0];i++)

    {

        for(j=0;j<s[0][1];j++)

            {

                flg=1;

                for(k=1;k<=s[0][2];k++)

                    {

                        if(s[k][0]==i&&s[k][1]==j)

                            {

                                flg=0;

                                cout << s[k][2] << "    ";

                                break;

                            }

                    }

                if(flg==1)

                cout << 0 << "   ";

            }

                printf("\n\n");

    }

}

int main()

{

    cout << "Enter the no of columns" << endl;

    cin >> s[0][0];

    cout << "Enter the number of rows" << endl;

    cin >> s[0][1];

    cout << "Enter the numgber of non zero elements"; 

    cin >> s[0][2];

    cout << "Enter the sparse matrix" << endl;

    int i,j;

    for(i=1;i<=s[0][2];i++)

    for(j=0;j<3;j++)

    cin >> s[i][j];

    cout << "The matrix is" << endl;

    print_matrix();

    return 0;

}