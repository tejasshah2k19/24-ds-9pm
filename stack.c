#include<stdio.h>
#define SIZE 5 

int stack[SIZE]; //STACK 
int top=-1; 



void push(int data){
    top++;
    stack[top] = data; 
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("\n%d",stack[i]);
    }
}

void pop(){

}


int main(){

    push(10);
    push(20);
    push(30);

    display(); //30 20 10 

    // push(40);

    // pop();//40 
    // pop();//30 

    // display(); //20 10 


    return 0; 
}