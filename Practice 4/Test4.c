#include <stdio.h>
int main(){
    int a;
    int c;
    c=0;
    printf("Enter a natural number you want sum of : ");
    scanf("%d",&a);
    for (int i=0;i<=a;i++)
    {
        c+= i;
    }
    printf("The Sum of %d is : %d\n",a,c);
    return 0;
}