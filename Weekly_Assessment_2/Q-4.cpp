// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, a[100], z = 0, y = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            z++;
        else
            y++;
    cout << z << y;
}