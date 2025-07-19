#include <stdio.h>
int main(){
    int address_Wali_array[5][5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                printf("The address of a[%d][%d][%d] is %u\n",i,j,k,&address_Wali_array[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}