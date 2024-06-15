#include <stdio.h>



void add(){
    printf("\nAdd");
}

void sub(){
    add();//caller 
    printf("\nSub");
}

void print(int n){//5 4 3 2  1 
   //Royal 
    n--; //
    if(n!=0)
        print(n);
    printf("\n%d",n+1);
}

int main(){

    print(5);//5 4 3 2 1 

    return 0; 
}

//function calling itself 
//Base case -> break 
