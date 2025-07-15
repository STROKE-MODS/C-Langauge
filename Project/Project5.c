/*Reverse Number Triangle*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number of line required in reverse number triangle: ");
    scanf("%d",&a);
    for (int i = a; i; i--)
    {
        for(int j=i;j;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}