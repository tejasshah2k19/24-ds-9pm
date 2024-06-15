#include<stdio.h>
#define S 5 


void scanArray(int a[]);



void max(int a,int b){
    if(a>b)
        printf("%d",a);
    else 
        printf("%d",b);
}


// int a[S];//global 

void scanArray(int a[])
{
    int index; 
    for (index = 0; index < S; index++)
    {
        printf("\nEnter value");
        scanf("%d", &a[index]); // a[0] a[1] a[2] a[3] a[4]
    }
}

void printArray(int a[])
{
    int index;
    for (index = 0; index < S; index++)
    {
        printf("\n%d", a[index]); // a[0] a[1] a[2] a[3] a[4]
    }
}

int main(){
    int a[S]; 
    // max(4,2);
    scanArray(a);
    printArray(a);
    return 0;
}