// In this code i will be writing the code for Getting area of rectangle getting dimensions by the user.

#include <stdio.h>

int main(){
    int a;
    printf("Enter the length of the rectangle :");
    scanf("%d",&a);
    int b;
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&b);
    int c = a*b;

    printf("The area of the rectangle is : %d X %d = %d\n",a,b,c);
    return 0;
}