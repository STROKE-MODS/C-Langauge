#include <stdio.h>
int main(){
    int array[3][10],table[]={5,7,9};
    for (int i = 0; i < 3; i++)
    {
        printf("The table of %d\n",table[i]);
            for (int j = 0; j < 10; j++)

            {
                    array[i][j]=table[i]*(j+1);
                    printf("%d X %d = %d\n",table[i],(j+1),array[i][j]);
                }
            
        }
    
    return 0;
}