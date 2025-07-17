#include <stdio.h>
int main(){
    int a;
    printf("Enter the Number you want address of  : ");
    scanf("%d",&a);
    int* j = &a;
    printf("The address of %d is %p: \n",a,j);
    return 0;
}