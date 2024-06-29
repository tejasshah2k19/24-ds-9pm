#include<stdio.h>
#define SIZE 10



int main(){

    int array[SIZE]={10,20,30,40,50,60,70,80,90,100};
    int i;
    int searchNum ; 
    int found = 0;// 0 : not found 
    //scan array 
    // for(i=0;i<SIZE;i++){
    //     printf("\nEnter number");
    //     scanf("%d",&array[i]);
    // }

    //num : search 
    printf("\nEnter number that you want to search : ");
    scanf("%d",&searchNum); 

    for(i=0;i<SIZE;i++){
        if(array[i] == searchNum){
            found = 1; //num found 
            break;
        }
    }

    if(found == 0){
        printf("\n%d Not found",searchNum);
    }else{
        
        printf("\n%d found",searchNum);
    }

    return 0; 
}