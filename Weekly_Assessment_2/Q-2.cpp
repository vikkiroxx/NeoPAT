// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    if (n < 1 || n > 9)
        cout << "Invalid Input";
    else if (c == 'y')
        cout << n + 5;
    else
        cout << n;
    return 0;
}