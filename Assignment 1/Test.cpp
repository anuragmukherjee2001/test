#include<iostream>

using namespace std;

 

int main()

{

    int n;

    cout << "Enter the Limit : ";

    cin >> n;

    cout << endl;

 

    for (int i = 0; i < n; i++)

    {

        int val = 1;

        for (int j = 1; j < (n - i); j++)

        {

            cout << "   ";

        }

        for (int k = 0; k <= i; k++)

        {

            cout << "      " << val;

            val = val * (i - k) / (k + 1);

        }

        cout << endl << endl;

    }

    cout << endl;

    return 0;

}