#include <stdio.h>
int main(){
    int a,i,b=1;
    printf("Enter the number you want facrorial of : ");
    scanf("%d",&a);
    i = a;
    while (0<i)
    {
        b*=i;
        i--;
    }
    printf("The Factorial of %d is %d\n",a,b);
    return 0;
}