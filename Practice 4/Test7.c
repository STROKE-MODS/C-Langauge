#include <stdio.h>
int main(){
    int c,d=0;
    printf("Enter the Number you want the sum of table of :");
    scanf("%d",&c);
    for (int i = 1; i <= 10; i++)
    {
        d+= c*i;
    }
    printf("The sum of the table is : %d\n",d);
    
    return 0;
}