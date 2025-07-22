#include <stdio.h>
#include <string.h>

typedef struct complex_no{
    int real;
    int imaginary;
}complex;
int main(){
    printf("\t\t\t\t<------COMPLEX-NUMBER-GENERATOR-------->\n");
    complex c1;
    printf("Enter the real part of the number:  ");
    scanf("%d",&c1.real);
    printf("Enter the imaginary part of the number:  ");
    scanf("%d",&c1.imaginary);

    printf("The complex number is : %d+%di\n",c1.real,c1.imaginary);
    printf("\t\t\t\t\t<------THANKS-------->\n");
    return 0;
}