#include <stdio.h>
int main(){
    float a;
    printf("Enter the Marks of First Subject : ",a);
    scanf("%f",&a);
    
    float b;
    printf("Enter the Marks of Second Subject : ",b);
    scanf("%f",&b);

    float c;
    printf("Enter the Marks of Third Subject : ",c);
    scanf("%f",&c);

    if (a>30.0 && b>30.0 && c>30.0)

    { if ((a+b+c)/3.0>40.0)
    {
        printf("You had Been promoted to the next class \n Your score in First Subject : %.2f,\n Your score in Second Subject : %.2f,\n   Your score in Third Subject was : %.2f \n Your aggreagate score is : %.2f",a,b,c,((a+b+c)/3));
        
    }
    }
        else
        {
            printf("You had Failed.\n");
        }
    
    return 0;
}