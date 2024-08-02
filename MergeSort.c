#include <stdio.h>

void display(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf(" %d",arr[i]);
    }

}

void print2(int a[], int size)
{
    // 10/2 => 5

    int size1 = size / 2;     // 5
    int size2 = size - size1; // 5
    int i=0,j=0,k=0;

    int x[size1]; //5
    int y[size2]; //5

    //x => 0 1 2 3 4  
    for(i=0;i<size1;i++){
        x[i] = a[k];
        k++;
    }
    
    //y => 0 1 2 3 4  
    for(j=0;j<size2;j++){
        y[j] = a[k];
        k++;
    }

    printf("\nMain Array : ");
    display(a,size);
    printf("\nSub1 Array : ");
    display(x,size1);
    printf("\nSub2 Array : ");
    display(y,size2);
    

}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 11, 12, 13, 14, 15};

    print2(a, 10);

    return 0;
}