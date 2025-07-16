// write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2

#include <stdio.h>
float weight(float);

float weight(float a){
    float g=9.8;
    
    float d=a*g;
    printf("The weight of the body is : %.2f",d);
}
int main(){
    float a;
    printf("Enter the mass of the body: ");
    scanf("%f",&a);
    weight(a);
    return 0;
}