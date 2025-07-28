#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char* ptr; 
    printf("Enter the number you want the array of : ");
    scanf("%d",&n);
    ptr = (char*) malloc(n * sizeof(char));
    ptr[1]='H';
    ptr[0]='H';
    ptr[2]='H';
    ptr[3]='H';
    for(int i =0;i<n;i++){
        printf("The value of i is : %c\n",ptr[i]);
    }

    return 0;
}
