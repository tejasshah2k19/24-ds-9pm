#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

char stack[SIZE]; // STACK
int top = -1;

void push(char data)
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
        printf("%c", stack[i]);
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
        printf("\n%c POPED", stack[top]);
        top--;
    }
}

int main()
{

    int choice;
    char str[50];
    int i; 

    printf("\nEnter string");
    //gets(str);//royal 
    scanf("%s",&str);
    
    printf("\nORIGINAL = %s",str);

    //
    for(i=0;str[i]!='\0';i++){
        push(str[i]);
    }
    printf("\nREVERSE = > ");
    display();//
 
    return 0;
}