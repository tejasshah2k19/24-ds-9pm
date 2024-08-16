#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[5]; // array ->dynamic
    int i;
    int *p;

    // p = malloc(sizeof(int));// single block -> malloc()1 argument
    p = calloc(5, sizeof(int)); //  same size - multiple block -> calloc 1:total elements , 2:size
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter value");
        scanf("%d", &p[i]);//& ? 
    }

    //5000 -> 6000 

    //realloc(9000) ->5000-6000----------9000
                //  ->12000-------------16000  

    printf("\nArray Data:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", p[i]);
    }

    return 0;
}
