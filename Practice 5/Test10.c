// #include <stdio.h>
// int factorial(int a);
// int factorial(int a){
//     if (a==1 || a==0){
//         return 1;
//     }
//     int b = a * factorial(a-1);
//     return b; 
// }

// int main(){
//     int a;
//     printf("Enter the number you want factorial of: ");
//     scanf("%d",&a);
//     int b= factorial(a);
//     printf("The factorial of %d is: %d\n",a,b);

//     return 0;
// }

// USING WHILE LOOP

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number you want factorial of :");
    scanf("%d",&a);
    int b=1 ;
    for (int i = 1; i <=a; i++)
    {
        b *= i;
    }
    printf("The factorial of %d is : %d\n",a,b);
    return 0;
}