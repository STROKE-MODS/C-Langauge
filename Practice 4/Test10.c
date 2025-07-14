#include <stdio.h>
int main(){

    int a,b=1,i=2;
    printf("Enter the Number to check whether it is prime or not : ");
    scanf("%d",&a);
    if (a<=0)
    {printf("The number is not prime.");
    return 0;
}

    while (i<a)
    {
        if (a%i==0){
        b=0;
        break;}
        i++;
    }
    if (b)
    printf("The number is Prime.\n");
    else
    {
        printf("The number is not Prime.\n");
    }
    return 0;
}