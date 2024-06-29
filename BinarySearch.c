#include <stdio.h>
#define SIZE 10

int main()
{

    int array[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, min, max, mid;
    int searchNum;
    int found = 0; // 0 : not found
    // scan array
    //  for(i=0;i<SIZE;i++){
    //      printf("\nEnter number");
    //      scanf("%d",&array[i]);
    //  }

    // num : search
    printf("\nEnter number that you want to search : ");
    scanf("%d", &searchNum);

    min = 0;
    max = SIZE - 1;

    while (min <= max)
    {
        mid = (min + max) / 2;

        if (array[mid] == searchNum)
        {
            found = 1;
            break;
        }
        else if (searchNum > array[mid])
        {
            min = mid + 1;
        }
        else if (searchNum < array[mid])
        {
            max = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("\n%d Not found", searchNum);
    }
    else
    {

        printf("\n%d found", searchNum);
    }

    return 0;
}