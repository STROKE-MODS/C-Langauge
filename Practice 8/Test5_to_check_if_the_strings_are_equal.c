#include <stdio.h>
#include <string.h>
int main(){
    char user1[50];
    char hello[50];
    printf("Enter the data : ");
    // fgets(user1,50,stdin); it is another method to use it
    scanf("%s",user1);
    printf("Enter the data : ");
    scanf("%s",hello);
    // fgets(hello,50,stdin); it is another method to use it 
    int a = strcmp(user1,hello);
    printf("if the result is 0 then the arrays are same if not then the array are different \n Result : %d\n",a);
    return 0;
}