// Q. What will data type 3.0/8-2 will give in return lets check !

#include <stdio.h>
int main(){
    float c = 3.0/8-2;
    printf("The value of c is : %f \n",c);
    return 0;
}

// The answer coming is -1.625000 it is due to the Operator precedence or Operator priority 
// As The order is likely to be 
/*  1st (*,/,%)
    2nd (+,-)
    3rd (=) 
    */