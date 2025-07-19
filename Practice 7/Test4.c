#include <stdio.h>
int main(){
    int a[10];
    int b;
    int j=0;
    printf("Enter the number you want table for : ");
    scanf("%d",&b);

    for(int i=0 ; i<=10; i++){
        a[i] = b*j; 
        printf("The number is: %d\n ",a[i]);
        j++;
    }
    for(int i=0 ; i<=10; i++){
        printf("%d\n",a[i]);
    }

    return 0;
}