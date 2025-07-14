#include <stdio.h>
int main(){
    long long int a,c=0,i=0 ;
    printf("Enter the number you want sum of :");
    scanf("%d",&a);
    while(i<=a)
    {
        c+=i;
        i+=1;
    }
    printf("The sum of %d is : %d\n",a,c);
    return 0;
}