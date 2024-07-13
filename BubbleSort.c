#include <stdio.h>

void bubbleSort(int array[], int size)
{
    int j, tmp, i;

    // 0 1 2 3 4
    //       j

    //O(n^2)
    for (i = 0; i < size; i++) //size time 
    {
        for (j = 0; j < size - 1; j++) //size time 
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void display(int arr[],int size){
    int i;
    for(i=0;i<size;i++)
        printf(" %d",arr[i]);
}
int main()
{

    int arr[] = {25, 14, 85, 74, 96, 36, 45, 65, 44, 11};
    printf("\nArray Before Sorting\n");
    display(arr, 10);
    bubbleSort(arr, 10);
    printf("\nArray After Sorting\n");
    display(arr, 10);
}


// n = 10;//100 -> N*N -> n^2 ->  
// for(i=1;i<=n;i++){//n=3 
//     for(j=1;j<=n;j++){
//         printf("hi");
//     }
// }
//