#include <stdio.h>
int main(){
    int rows,coef=1;
    printf("Enter the number of rows required in the pascals triangle : ");
    scanf("%d",&rows);
    for (int i=0;i<=rows;i++){
        for (int space = 1; space <=rows-i; space++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            if (j==0)
            {
                coef=1;
            }
            else{
                printf("%3d",coef);
                coef=coef*(i-j)/j;
            }
        }
        printf("\n");
    }
    return 0;
}