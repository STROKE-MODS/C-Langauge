#include <stdio.h>
#include <string.h>

typedef struct two_dimensional_vector{
    int x_axis;
    int y_axis;
}vector;
int main(){
    vector v1;
    vector* ptr=&v1;
    printf("Enter the value of x coordinate : ");
    scanf("%d",&v1.x_axis);
    printf("Enter the value of y coordinate : ");
    scanf("%d",&v1.y_axis);
    printf("The vector is  : %di+%dj\n",ptr->x_axis,ptr->y_axis);
    return 0;
}


