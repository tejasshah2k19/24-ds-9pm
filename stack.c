#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE]; // STACK
int top = -1;

void push(int data)
{
    if (top == SIZE - 1)
    {
        printf("\nSTACK FULL");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nSTACK IS EMPTY\n");
    }
    else
    {
        printf("\n%d POPED", stack[top]);
        top--;
    }
}

int main()
{

    int choice, num;

    while (-1)
    {
        printf("\n0 For EXIT");
        printf("\n1 For PUSH\n2 For POP\n3 For Display\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            printf("\nINVALID CHOICE PTA !!! \n");
            break;
        }
    }
    return 0;
}