#include <stdio.h>
#include <string.h>

int main(){
    char words[]="Hello my name is himanshu";
    int b=0;
    for (int i = 0; i<strlen(words); i++)
    {
        words[i] = words[i]+1;
        b++;
    }
    words[b]='\0';
    printf("The encrypted code is : %s\n ",words);
    return 0;
}