/*Creating a right angled triangle pattern with star.*/

#include <stdio.h>
int main(){
    int a;
    printf("How many stars right angle triangle you want ?");
    scanf("%d",&a);
    for (int i = 1;i <= a; i++)
    {   
        for (int j = 1;j <= i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}