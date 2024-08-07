#include <stdio.h>

//                      0          5       9
void merge(int a[], int start, int mid, int end)
{

    int i, j, k;
    int s1 = mid - start + 1;
    int s2 = end - mid;

    int x[s1];
    int y[s2];

    for (i = 0; i < s1; i++)
    {
        x[i] = a[start + i];
    }

    // y => 0 1 2 3 4
    for (j = 0; j < s2; j++)
    {
        y[j] = a[mid + j + 1];
    }

    i = 0;
    j = 0;
    k = start;
    while (i < s1 && j < s1 + s2)
    {
        if (x[i] < y[j])
        {
            a[k++] = x[i++];
        }
        else
        {
            a[k++] = y[j++];
        }
    }

    while (i < s1)
    {
        a[k++] = x[i++];
    }

    while (j < s2)
    {
        a[k++] = y[j++];
    }
}

// low upper
//  l u
// left right
// l r
void mergeSort(int a[], int start, int end)
{

    if (start < end)
    {
        int mid = (start + (end-1)) / 2;
        // printf("\nstart = %d mid = %d end = %d", start, mid, end);
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        // printf("\nstart = %d mid = %d end = %d",start,mid,end);
        merge(a, start, mid, end);
    }
}

void printArray(int a[], int size)
{
    int i;
    printf("\nElements : ");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
}
int main()
{

    int a[] = {11, 122, 31, 4, 115, 600, 700, 85, 91, 100}; // 4*10=40
    int size = sizeof(a) / sizeof(int);                     // total element
    mergeSort(a, 0, size - 1);                              //
    printArray(a, size);

    return 0;
}