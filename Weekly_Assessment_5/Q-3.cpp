#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 2;
    cin >> n;
    int arr[n];
    arr[0] = 3, arr[1] = 8;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}