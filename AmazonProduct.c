#include<stdio.h>

struct product{
    char productName[20];
    char category[20];
    int productId;
    int qty;
    int price; 
};


int main(){
    struct product p1[10];//a of s  
    int i; 

    for(i=0;i<2;i++){ 
        printf("\nEnter productid name price qty and category : ");
        scanf("%d%s%d%d%s",&p1[i].productId,&p1[i].productName,&p1[i].price,&p1[i].qty,&p1[i].category);
    }
    for(i=0;i<2;i++){ 
    
        printf("\nProductId : %d",p1[i].productId);
        printf("\nProductName : %s",p1[i].productName);
        printf("\nPrice : %d",p1[i].price);
        printf("\nQty : %d",p1[i].qty);
        printf("\nCategory : %s",p1[i].category);
    }
    return 0; 
}