#include <stdio.h>
int power(int a , int b);
int power(int a , int b){
    int c= 1;
    for (int i = 1; i <=b; i++)
    {
        c*=a;
    }
    return c;
    
}

int main(){
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&b);
    int d = power(a,b);
    printf("The %d raise to power %d is : %d\n",a,b,d);
    return 0;
}