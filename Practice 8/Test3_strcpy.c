#include <stdio.h>
#include <string.h>

int main()
{
    char first_string[] = "Himanshu"; // It is new method of creating an array
    char second_string[50];

    int length_of_first_str = strlen(first_string); // strlen helps to find the length of the string
    printf("The data of string is :%s\nIts length is : %d \n", first_string, length_of_first_str);

    strcpy(second_string, first_string); // strcpy is the function of the string which will help to copy the data of the string
    printf("The copied string data is : %s\n", second_string);
    return 0;
}
