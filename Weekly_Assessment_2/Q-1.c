// You are using GCC
#include <stdio.h>
int main()
{
    int no, sum = 0, rev, revsum = 0, rm, dm, prd;
    scanf("%d", &no);
    dm = no;
    while (no > 0)
    {
        rm = no % 10;
        sum += rm;
        no /= 10;
    }
    rev = sum;
    rm = 0;
    while (rev > 0)
    {
        rm = rev % 10;
        revsum = (revsum * 10) + rm;
        rev /= 10;
    }
    prd = sum * revsum;
    if (prd == dm)
        printf("%d is a special number", dm);
    else
        printf("%d is not a special number", dm);

    return 0;
}