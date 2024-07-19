#include <stdio.h>
void display(int arr[], int size);

void selectionSort(int array[], int size)
{
    int i;
    int j;
    int min;
    int tmp;

    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
        }
        tmp = array[i];
        array[i] = array[min];
        array[min] = tmp;
        printf("\nPass %d : ",i+1);
        display(array,size);

    }
}

void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf(" %d", arr[i]);
}
int main()
{

    // int arr[] = {25, 14, 85, 74, 96, 36, 45, 65, 44, 11};
    int arr[] = {25, 14, 85, 74, 96};

    printf("\nArray Before Sorting\n");
    display(arr, 5);
    selectionSort(arr, 5);
    printf("\nArray After Sorting\n");
    display(arr, 5);
}

// n = 10;//100 -> N*N -> n^2 ->
// for(i=1;i<=n;i++){//n=3
//     for(j=1;j<=n;j++){
//         printf("hi");
//     }
// }
//


//pass1: 
//  X Y Z A B 

//Pass2:
//  X A Y Z B 
