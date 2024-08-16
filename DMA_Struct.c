#include <stdio.h>
#include <stdlib.h>

struct product
{
    char productName[20];
    int price;
};

int main()
{

    // struct product p;
    // printf("\nEnter name and price ");
    // scanf("%s%d",&p.productName,&p.price);// dot operator

    // printf("\nProductName = %s",p.productName);
    // printf("\nPrice = %d",p.price);

    struct product *p;

    p = malloc(sizeof(struct product));
    // p = calloc(1,sizeof(struct product));

    printf("\nEnter name and price ");
    scanf("%s%d", &p->productName, &p->price); // arrow operator

    printf("\nProductName = %s", p->productName);
    printf("\nPrice = %d", p->price);

    return 0;
}