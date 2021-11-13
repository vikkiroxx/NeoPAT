void push(struct Stack *S, int arr[], int n)
{
    if (S->top == n)
        printf("\n Overflow");
    else
    {
        for (int i = 0; i < n; i++)
            S->stack[++S->top] = arr[i];
    }
}

void pop(struct Stack *S)
{
    if (S->top == -1)
        printf("Underflow");
    else
        S->top = S->top - 1;
}
