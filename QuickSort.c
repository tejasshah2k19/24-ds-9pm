#include <stdio.h>
#define SIZE 10

int partition(int a[], int l, int h)
{
    int pivot = a[h];
    int i, j, tmp;
    i = l - 1;
    for (j = l; j < h; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    i++;
    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;

    return i; 
}

void quickSort(int a[], int l, int h)
{
    int ind; 
    if (l < h)
    {
        // printf("\nPivot = %d",a[h])
        ind = partition(a, l, h);
        quickSort(a,l,ind-1);
        quickSort(a,ind+1,h);
        
    }
}

void display(int a[]){
    int i;
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}
int main()
{

    int a[] = {23, 45, 67, 89, 87, 65, 43, 2, 11, 222};

    // print
    printf("\nArray before sort : ");
    display(a);
    quickSort(a, 0, SIZE - 1);
    // print
    
    printf("\nArray after sort : ");
    display(a);
    return 0;
}