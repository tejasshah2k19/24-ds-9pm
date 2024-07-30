#include <stdio.h>

void sub()
{
    printf("\nsub()");
    printf("\nsub2()");
}

void add()
{
    printf("\nadd()");
    sub(); // recursion?
    printf("\nadd2()");
}

void mul(int count) // 1
{                   // 2

    if (count == 0)
    {
        return;
    }
    //  count++;//2
    mul(count - 1);        // function calling itself ...
    printf("\n%d", count); // 1 2 3 4 5
}

int linearSearch(int arr[], int size, int search)
{ // arr[4] arr[3] 2 1 0
    if (size == 0)
    {
        return 0;
    }
    if (arr[size - 1] == search)
    {
        return 1;
    }
    linearSearch(arr, size - 1, search);
}
int main()
{

    // add();//recursion?
    // mul(5); // recursion? Yes
    int array[] = {1, 2, 3, 4, 5};
    int ans = linearSearch(array, 5, 3);
    printf("\n%d", ans);
    // 0->not found
    // 1->found
    return 0;
}
// add()
// sub()
// sub2()
// add2()