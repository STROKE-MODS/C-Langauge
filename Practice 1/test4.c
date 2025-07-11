// In this code i will be calculating Simple Interest by getting user input

#include <stdio.h>

int main(){
    int principal;
    printf("Enter the Principal Amount : $");
    scanf("%d",&principal);

    int rate;
    printf("The Rate of Intereset per annum is :");
    scanf("%d",&rate);

    int time;
    printf("The Time period in Years : ");
    scanf("%d",&time);

    float SI;
    SI =  (principal*rate*time)/100.0;
    printf("The Simple Interest for the Principal Amount $%d \n Rate of Interest %d\n Time Period %d Years IS : %.2f  ",principal,rate,time,SI);
    return 0;
}

