#include <stdio.h>
#include <stdlib.h>
int *stack = (int *)malloc(sizeof(int *) * 100);
int choice, n, top, x, i;
void push();
void pop();
void display();
int main()
{

    top = -1;

    scanf("%d", &n);
    push();
    pop();
    display();
}
void push()
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        top++;
        *(stack + top) = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("Deleted element is %d\n", *(stack + top));
        top = top - 1;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("The elements in stack\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", *(stack + i));
    }
    else
    {
        printf("The stack is empty");
    }
}