// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);
    bool flag = true;
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] < s[i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "yes";
    else
        cout << "no";
}