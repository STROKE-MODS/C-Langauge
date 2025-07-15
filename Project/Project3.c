/*Inverted right angled star triangle.*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the rows in pattern of inverted right angled triangle: ");
    scanf("%d",&a);
    for (int i = a; i; i--)
    {
        for (int j=i ; j; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}