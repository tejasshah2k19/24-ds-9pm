#include<stdio.h>
#define S 5
#define pf printf

//macro 
//size define
//symbolic constant 

int main()
{

    int a[S];//0 1 2 3 4 
    int index;
//    printf("\nEnter 5 values");
//    scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
//    printf("\n%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
    
    for(index=0;index<S;index++){
        pf("\nEnter value");
        scanf("%d",&a[index]);//a[0] a[1] a[2] a[3] a[4] 
    }
    

    for(index=0;index<S;index++){
        pf("\n%d",a[index]);//a[0] a[1] a[2] a[3] a[4] 
    }

    return 0;
}

//entry control { for , while }
//exit conrol   { do..while }

//for while do..while 