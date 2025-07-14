// Write a program to calculate the factorial of a given number using a for loop

#include <stdio.h>
int main(){
    int a,c=1;
    printf("Enter the number you want factorial of :");
    scanf("%d",&a);
    for (int i = a; i; i--)
    {
        c*=i;
    }
    printf("The factorial of %d is %d\n",a,c);
    
    return 0;
}