#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 11, t;
    cin >> n;
    int arr[n];
    arr[0] = 5;
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] + c;
        c += 22;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}