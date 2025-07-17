#include <stdio.h>

int by_Call_method(int , int);
int by_Call_method(int a, int b){
    int temp;
    temp = a;
    b = temp;
    a = b;
}
int main(){
    int a,b;
    printf("The First number is ");
    scanf("%d",&a);
    printf("The Second Number is :");
    scanf("%d",&b);
    by_Call_method(a,b);
    printf("The value of a is %d and of b is  %d", a,b);

    return 0;
}