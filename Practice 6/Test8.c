#include <stdio.h>

int meanandaverage(int*, int*);
int meanandaverage(int* a, int* b){
    int c= *a+*b;
    printf("The sum is : %d\n",c);

    int d= (*a+*b)/2;
    printf("The average is : %d\n",d);
}

int main(){
    int firstnumber,secondnumber;
    printf("Enter the first number : ");
    scanf("%d",&firstnumber);
    printf("Enter the second number : ");
    scanf("%d",&secondnumber);
    meanandaverage(&firstnumber,&secondnumber);
    return 0;
}