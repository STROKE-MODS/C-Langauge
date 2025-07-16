// Write a program using function to find average of three numbers

#include <stdio.h>

int average(int ,int ,int);

int average(int a,int b,int c){
    float d = (a+b+c)/3.0;
    printf("The average of your three Numbers are : %.2f\n",d);
    return d;
}

int main(){
    int a,b,c;

    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    printf("Enter a number:");
    scanf("%d",&c);
    average(a,b,c);
    return 0;
}