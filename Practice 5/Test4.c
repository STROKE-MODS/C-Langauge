// Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>


int fabonaci(int a);

int fabonaci(int a){
 if (a==1)
 {
    return 1;
 }
 if (a==0)
 {
    return 0;
 }
 
 return fabonaci(a-2)+fabonaci(a-1);
}

int main(){
    int a;
    printf("Entert the Number you want in fabonaci series :");
    scanf("%d",&a);
    int b = fabonaci(a);
    printf("The fabonaci series of %d is : %d\n",a,b);

    return 0;
}