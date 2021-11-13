// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (((i + j) % 2) == 0)
                cout << "1";
            else
                cout << "0";
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}