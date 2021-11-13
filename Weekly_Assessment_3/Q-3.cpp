// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i == (n - 1))
            for (int j = 0; j < 2 * n - 1; j++)
            {
                cout << "*";
            }
        else
        {
            for (int k = 0; k < n - 1; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}