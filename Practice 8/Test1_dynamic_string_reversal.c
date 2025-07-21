#include <stdio.h>
#include <string.h>


void revrse_string(char* a);
void revrse_string(char* a){
    char* start = a;
    char* end = a + strlen(a) - 1;
    if(*end == '\n'){
        *end ='\0';
        end--;
    }

    while(start<end)
    {
      int temp = *start;
      *start=*end;
      *end = temp;
      start++;
      end--;
    }
}


int main(){
    char a[100];
    printf("Enter the word you want to reverse string for : ");
    fgets(a,sizeof(a),stdin);
    revrse_string(a);
    printf("The reversed string is : %s",a);   
    return 0;
}