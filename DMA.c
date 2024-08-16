#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;//4 byte 
    int *p;//memory  

    p = malloc(sizeof(int)); // tc -> 2  , gcc -> 4 

    // p = malloc(4);//4 is the size of int 
                //if i want to allocate for character 
                //i have to pass 2 , so  in the argument of malloc we have to pass how much byte we need 
                //if i ask for 3 byte then ? it allocates 3 byte for you no worries !! 
                // what if i run this progrma in turbo c ? cz turbo required 2 byte for int 
                //   and gcc required 4 byte than how we can handle that scenario? 
    printf("enter value");
    scanf("%d", p);//&a 

    printf("\na = %d",*p);//value at p 
    free(p);


    
    return 0;
}

    // int a;
    
    // printf("enter value");
    // scanf("%d", &a);

    // printf("\na = %d",a);
