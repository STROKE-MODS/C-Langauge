/* 
To remove spaces we can create a fucntion which will help us to remove the spaces
*/

#include <stdio.h>

void remove_spaces(char* s);
void remove_spaces(char* s){
    char* read=s;
    char* write=s;

    while (*read != '\0')
    {
        if (*read != ' ')
        {
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';
}

int main(){

    char line[1000];
    printf("Enter a line : ");
    fgets(line,sizeof(line),stdin);
    remove_spaces(line);
    printf("%s",line);
    return 0;
}