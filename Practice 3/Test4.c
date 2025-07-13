#include <stdio.h>
int main(){
    float a;
    printf("Enter you salary per annum in Lakhs: ",a);
    scanf("%f",&a);

    if ( 2.5<a && 5.0>=a)
    {
        printf("You Have to pay 5%% tax\n.");
    }
    else if(a<2.5)
    {
        printf("You dont have to pay any tax\n.");
    }
    else if(5.0<a && 10.0>=a)
    {
        printf("You have to pay 20%% tax\n.");
    }
    else
    {
        printf("You have to pay 30%% tax\n.");
    }

    return 0;
}