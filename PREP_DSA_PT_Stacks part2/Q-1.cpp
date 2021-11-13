#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int findmin(int sum1, int sum2, int sum3)
{
    if (sum1 < sum2 && sum1 < sum3)
        return 1;
    else if (sum2 < sum1 && sum2 < sum3)
        return 2;
    else if (sum3 < sum1 && sum3 < sum2)
        return 3;
    else if (sum1 < sum2 && sum1 == sum3)
        return 31;
    else if (sum2 < sum1 && sum2 == sum3)
        return 23;
    else if (sum1 < sum3 && sum1 == sum2)
        return 12;

    return 0;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int a1[a], a2[b], a3[c];
    int i = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (i = 0; i < a; i++)
    {
        scanf("%d", &a1[i]);
        sum1 += a1[i];
    }
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a2[i]);
        sum2 += a2[i];
    }
    for (i = 0; i < c; i++)
    {
        scanf("%d", &a3[i]);
        sum3 += a3[i];
    }
    // printf("%d %d %d",sum1,sum2,sum3);
    int val = 0;
    int tc = 100000;
    int e = 0, d = 0, f = 0;
    while (tc--)
    {
        val = findmin(sum1, sum2, sum3);
        //printf("%d",val);
        if (val == 1)
        {
            sum2 -= a2[e];
            e++;
            sum3 -= a3[f];
            f++;
            if (sum1 == sum2 && sum2 == sum3)
            {
                break;
            }
        }
        else if (val == 2)
        {
            sum1 -= a1[d];
            d++;
            sum3 -= a3[f];
            f++;
            if (sum1 == sum2 && sum2 == sum3)
            {
                break;
            }
        }
        else if (val == 3)
        {
            sum2 -= a2[e];
            e++;
            sum1 -= a1[d];
            d++;
            if (sum1 == sum2 && sum2 == sum3)
            {
                break;
                //printf("yoo");
            }
            //printf("%d %d %d",sum1,sum2,sum3);
        }
        else if (val == 12)
        {

            sum3 -= a3[f];
            f++;
            if (sum1 == sum2 && sum2 == sum3)
            {
                //printf("yoo");
                break;
            }
            // printf("%d %d %d",sum1,sum2,sum3);
        }
        else if (val == 31)
        {
            sum2 -= a2[e];
            e++;

            if (sum1 == sum2 && sum2 == sum3)
            {
                break;
            }
        }
        else if (val == 23)
        {
            sum1 -= a1[d];
            d++;

            if (sum1 == sum2 && sum2 == sum3)
            {
                break;
            }
        }
    }
    printf("%d", sum1);

    return 0;
}