void display()
{
    if (top >= 0)
    {
        int search;
        int flag = 0;
        scanf("%d", &search);
        for (i = top; i >= 0; i--)
        {
            if (search == *(stack + i))
            {
                flag = 1;
            }
        }

        if (flag == 1)
            printf("Element found");
        else
            printf("Element not found");
    }
    else
    {
        printf("The STACK is empty");
    }
}