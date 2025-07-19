#include <stdio.h>
int pointer_to_pointer(int* a);
int pointer_to_pointer(int* a){
    printf("The value of the pointer is : %d\n",*a);
}

int main(){
    int a[]={1,2,4,5,6,7,8,9,10};
    int* ptr = a;
    printf("The Pointer is : %d\n",*ptr);
    ptr=ptr+2;
    printf("The Pointer is : %d\n",*ptr);
    

    return 0;
}