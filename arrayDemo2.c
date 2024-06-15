#include <stdio.h>
#define S 5
#define pf printf

// macro
// size define
// symbolic constant
int a[S];//local 

// void -> no return 

int add(int a,int b){
    
    int ans  = a+b; 
    return ans;
}

void scanArray()
{
    int index; 
    for (index = 0; index < S; index++)
    {
        pf("\nEnter value");
        scanf("%d", &a[index]); // a[0] a[1] a[2] a[3] a[4]
    }
}

void printArray()
{
    int index;
    for (index = 0; index < S; index++)
    {
        pf("\n%d", a[index]); // a[0] a[1] a[2] a[3] a[4]
    }
}

int main()//caller
{

    scanArray();//calling 
    printArray();
    int ans = add(10,30); 
    printf("\nAdd =  %d",ans);
    return 0;
}
