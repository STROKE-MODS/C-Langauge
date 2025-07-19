#include <stdio.h>
int main(){
    int a[4][2];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the Number :");
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {   
    for (int j = 0; j < 2; j++)
    {
        printf("The numbers are : %d\n",a[i][j]);
    }
}
    return 0;
}