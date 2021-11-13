int peek(int *stack)
{
    if (top == -1)
    {
        printf("\n STACK IS EMPTY");
        return -1;
    }
    else
        return (*(stack + top));
}