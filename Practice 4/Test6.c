#include <stdio.h>
int main(){
    int a , i=0,c=0;
    printf("Enter the number you want sum of: ");
    scanf("%d",&a);
do
{
    c+=i;
    i+=1;
} while (i<=a);
printf("The sum of the Number %d is : %d\n",a,c);
    return 0;
}