#include <stdio.h>

int main(){
    int a=72;
    int* b = &a;
    printf("The address of the pointer b is : %p\n",b);
    b = b+5;
    printf("The address of the pointer b is : %p\n",b);

    int c = 84;
    int* d= &c;
    printf("The difference beteween two pointers are : %p - %p = %td\n ",b,d,(b-d));
    if (b>d){
        printf("pointer b is greater.\n");
    }
    else
    {
        printf("pointer d is greater.\n");
    }
    return 0;

}