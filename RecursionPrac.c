#include <stdio.h>
#define SIZE 10
// merge

void merge(int a[], int s1, int b[], int s2, int c[])
{

    int i, j, k;
    i = 0;
    j = s1;
    k = 0;

    while (i < s1 && j < s1+s2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < s1)
    {
        c[k++] = a[i++];
    }

    while (j < s1+s2)
    {
        c[k++] = b[j++];
    }
}
int main()
{

    // int a[] = {23, 4, 67, 89, 87, 65, 43, 33, 11, 50};
    int a[] = {11, 22, 33, 44, 55, 24, 43, 45, 47, 50};
    int c[SIZE];
    int i;
    merge(a, 5, a, 5, c);
    for (i = 0; i < 10; i++)
    {
        printf(" %d", c[i]);
    }

    return 0;
}