#include <stdio.h>
void address(int*);
void address(int* second){
    printf("The address of the variable is : %p\n",second);
}
int main(){
    int numberforpointer=72;
    printf("The address of this variable is : %p\n ",&numberforpointer);
    address(&numberforpointer);
    
    return 0;
}

/*This time the address is same because this time the address ahd been sent not the copy
value.
*/