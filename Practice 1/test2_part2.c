//I am Converting my area code to the Cylinder code ;-).
#include <stdio.h>

int main(){
    int a;
    printf("Enter the Radius of the cylinder : ");
    scanf("%d",&a);
    int b;
    printf("Enter the Height of cylinder : ");
    scanf("%d",&b);
    
    float c = (22.0*(a*a)*b)/7.0;
    printf("The Volume of the cylinder is : %.2f\n",c);
    return 0;
}
