// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, i, j;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i + 1; j++)
            cout << "*";
        cout << "\n";
    }
    for (i = 1; i < N; i++)
    {
        for (j = i; j < N; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}