#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 1, t;
    cin >> n;
    int arr[n];
    arr[0] = 2;
    for (int i = 1; i < n; i++)
    {
        arr[i] = (arr[i - 1] * 2) + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}