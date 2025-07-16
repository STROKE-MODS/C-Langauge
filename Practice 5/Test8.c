#include <stdio.h>

int reverse(int a);
int reverse(int number){
    int rev=0,num;
    while(number!=0)
    {
         num = number%10; //this  will generate the last digit
        rev = rev*10+num; //this will add on the revrse number 
        number = number/10; // this will remove the last digit

    }
    return rev;
}

int main(){
    int a;
    printf("Enter the number you want to reverse :");
    scanf("%d",&a);
    int b = reverse(a);
    printf("The reversed number is : %d\n",b);
    return 0;
}