#include <stdio.h>
#define SIZE 5

void insertionSort(int a[])
{
    int i, j, current;
    int x;
    for (i = 1; i < SIZE; i++)
    {
        current = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > current)
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
            printf("\nPass %d:", i);
            for (x = 0; x < SIZE; x++)
            {
                printf(" %d", a[x]);
            }
        }
        a[j + 1] = current;

        printf("\nPass %d Completed : ", i);
        for (x = 0; x < SIZE; x++)
        {
            printf(" %d", a[x]);
        }
    }
}

int main()
{

    int a[] = {21, 12, 52, 6, 18};
    int i;
    printf("\nBefore Sorting : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
    insertionSort(a);

    printf("\nAfter Sorting : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
    return 0;
}