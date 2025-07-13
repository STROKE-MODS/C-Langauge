#include <stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter the first number :",a);
    scanf("%f",&a);
    printf("Enter the Second number :",b);
    scanf("%f",&b);
    printf("Enter the Third number :",c);
    scanf("%f",&c);
    printf("Enter the Fourth number :",d);
    scanf("%f",&d);

    if(a>b && a>c && a>d)
    {
        printf("%.2f is the greatest.\n",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%.2f is the greatest.\n",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("%.2f is the greatest.\n",c);
    }
    else{
        printf("%.2f is the greatest.\n",d);
    }
    return 0;
}