#include <stdio.h>
int reverse(int a);
int reverse(int a){
    int rev=0,num;
    while (a!=0){
        num=a%10;
        rev=rev*10 + num;
        a = a/10;
    }
    return rev;
}
int main(){
    int a;
    printf("Enter the Number for which you want to check if it is an palindrome or not : ");
    scanf("%d",&a);
    int d = reverse(a);
    if(a==d){
        printf("%d is an palindrome.\n",a);
    }
    else{
        printf("%d is not an palindrome.\n",a);
    }
    return 0;
}