// Celsius to Fahrenheit Temperature Conversion.

#include <stdio.h>

int main(){
    int a;
    printf("Enter the Temperature in Celsius : ");
    scanf("%d",&a);

    float b;
    b = ((a*9.0)/5.0)+32.0;
    printf("The %d°C to Fahreheit is : %.2f°F",a,b);
    return 0;
}