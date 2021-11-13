void PFactors(int num)
{
    int stack[MAX], top = -1, i, p = 0;
    for (i = 1; i <= num; i++)
        if (num % i == 0)
        {
            p = push(i, &top, stack);
            if (p == 1)
                exit(0);
            else
                continue;
        }
    while (top != -1)
    {
        printf("%d ", stack[top]);
        pop(&top, stack);
    }
    printf("\n");
}
