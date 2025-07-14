#include <stdio.h>
int main(){
    int a,b=2,c=1;
    printf("Enter a number to check wether it is prime or not : ");
    scanf("%d",&a);
    if (a<=0){
        printf("The number is not prime.");
        return 0;
    }
    while (b<a)
    {
        if (a%b==0)
        {
            c = 0;
            break;
        }
        b++;
    }
    if(c)
    printf("The Number is prime.\n");
    else
    printf("The Number is not prime.\n");
    
    return 0;
}