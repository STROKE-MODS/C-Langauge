#include <stdio.h>
int main(){
    int a;
    printf("How many lines are required in the triangle :");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k <= a-i-1; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            if (j==0 || j==i){
                printf("*");
            }

            
            else{

                
                    printf(" ");
                    

                
            }
            if (j<i);
            {
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    for (int m = 0; m < a*2+1; m++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}