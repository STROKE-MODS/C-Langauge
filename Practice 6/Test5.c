#include <stdio.h>

void address2(int a){
    printf("The addres sof the number is : %p\n",&a);
}

int main(){

    int a =5 ;
    printf("The address of a is :%p\n ",&a);
    address2(a);
    return 0;
}
/*This time the copy value had been sent to the function which lead to the difference
in the address although the time of execution was same.*/