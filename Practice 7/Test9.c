#include <stdio.h>

int main(){
    int choose_your_no_Wali_array[10],b;
    printf("Enter the Number you want the table of: ");
    scanf("%d",&b);
    for (int i = 0; i < 10; i++)
    {
        choose_your_no_Wali_array[i]=b*(i+1);
        printf("%d X %d = %d\n",b,(i+1),choose_your_no_Wali_array[i]);
    }
    
    return 0;
}