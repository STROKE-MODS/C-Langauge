#include <stdio.h>
float conversion(float);
float conversion(float){
    float a=52.0;
    float c= ((a*9.0)/5.0)+32.0;
    printf("The Temperature in Fahreinheit is :%.2f\n",c);
}
float main(){
    float a;
    printf("Enter the temperature in celsius : ");
    scanf("%f",&a);
    conversion(a);
    return 0;
}