#include <stdio.h>
#define SIZE 5

int q[SIZE];
int f = -1;
int r = -1;

void enQueue(int num)
{
    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQueue is Full");
    }
    else if (r == f - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        if (r == SIZE - 1)
        {
            r = 0;
            q[r] = num;
        }
        else
        {

            r++;
            q[r] = num;
            if (f == -1)
            {
                f = 0;
            }
        }
    }
}

void deQueue()
{
    if (f == -1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        if (f == r)
        {
            printf("\n%d removed", q[f]);
            f = -1;
            r = -1;
        }
        else if (f == SIZE - 1)
        {
            printf("\n%d removed", q[f]);
            f = 0;
        }
        else
        {
            printf("\n%d removed", q[f]);
            f++;
        }
    }
}

void display()
{
    int i;
 
    if (f == -1)
    {
        printf("\nQueue is Empty");
        return; 
    }
    printf("\nElements in the Queue : ");
    if (f <= r)
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
    else
    {
        for (i = f; i < SIZE; i++)
        {
            printf(" %d", q[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();
    deQueue();
    display();
    enQueue(70);
    display();
    return 0;
}