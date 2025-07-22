#include <stdio.h>
#include <string.h>

typedef struct vector_Addition
{
    int vector_a_x;
    int vector_a_y;
    int vector_b_x;
    int vector_b_y;
    int vector_Add_a_xcoordinate;
    int vector_Add_a_ycoordinate;
} add_vector;

int main()
{
    add_vector v1;
    printf("Enter the first vector to be added x coordinate : ");
    scanf("%d", &v1.vector_a_x);
    printf("Enter the first vector to be added y coordinate : ");
    scanf("%d", &v1.vector_a_y);

    printf("Your first vector is : %di+%dj\n", v1.vector_a_x, v1.vector_a_y);

    printf("Enter the second vector to be added x coordinate : ");
    scanf("%d", &v1.vector_b_x);
    printf("Enter the second vector to be added y coordinate : ");
    scanf("%d", &v1.vector_b_y);

    printf("Your second vector is : %di+%dj\n", v1.vector_b_x, v1.vector_b_y);


    v1.vector_Add_a_xcoordinate = v1.vector_a_x + v1.vector_b_x;
    v1.vector_Add_a_ycoordinate = v1.vector_a_y + v1.vector_b_y;

    printf("The resultant vector is : %di+%dj", v1.vector_Add_a_xcoordinate, v1.vector_Add_a_ycoordinate);
    return 0;
}