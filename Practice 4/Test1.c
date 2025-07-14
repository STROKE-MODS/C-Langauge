#include <stdio.h>
int main(){
    int i=0;
    int b;
    printf("Enter the number: ");
    scanf("%d",&b);
    do
    {
        printf("Your Number is : %d\n",i);
        i+=1;
        
    } while (i<=b);
    
    return 0;
}