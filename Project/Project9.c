#include <stdio.h>

void average(int* id,int* a,int* b,int* c);
void average(int* id,int* a,int* b,int* c){
    float d[3];
    for (int i = 0; i < 3; i++)
    {
        d[i] = (*a+*b+*c)/3.0;
        *a++,*b++,*c++;
        if (d[i]>90.0 && d[i]<=100.0){

            printf("The student having student id %d\n had got average score of %d\n and has got grade A\n",id[i],d[i]);
        }
        else if (d[i]>80.0 && d[i]<=90.0){

            printf("The student having student id %d\n had got average score of %d\n and has got grade B\n",id[i],d[i]);
        }
        else if (d[i]>70.0 && d[i]<=80.0){

            printf("The student having student id %d\n had got average score of %d\n and has got grade C\n",id[i],d[i]);
        }
        else if (d[i]>50.0 && d[i]<=60.0){

            printf("The student having student id %d\n had got average score of %d\n and has got grade D\n",id[i],d[i]);
        }
        else if (d[i]>40.0 && d[i]<=50.0){

            printf("The student having student id %d\n had got average score of %d\n and has got grade E\n",id[i],d[i]);
        }
        else {
            printf("The student having student id %d\n had got average score of %d\n and has got grade F\n",id[i],d[i]);
        }
        }
    }

int highest(int* ,int b,int* ids);
int highest(int* a,int b,int* ids)
{
int c=0,max_id;
    for (int i = 0; i < b; i++)
    {
     if (c<*a){
         c=*a;
         max_id = ids[i];
    }

    a++;
    }

    printf("The highest marks in the class is : %d\n and of student having student id: %d\n",c,max_id);
}

int* total(int*, int* , int*,int*);
int* total(int* a, int* b, int* c,int* total_marks){
    for (int i = 0; i < 3; i++)
    {
        total_marks[i] = a[i]+ b[i] +c[i];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The marks of student id %d is : %d\n ",(i+1),total_marks[i]);
    }   

}


int main(){
    int Studentid[3],Hindi[3],Science[3],Maths[3],total_marks_each_student[3];
    
    for (int i = 1; i < 4; i++)
    {
        printf("Enter the student id : ");
        scanf("%d",&Studentid[i-1]);

    for (int j = i-1; j < i; j++)
    {
        printf("Enter your marks for Hindi out of 100 : ");
        scanf("%d",&Hindi[j]);
        
    }
    for (int k = i-1; k < i; k++)
    {
        printf("Enter your marks for Science out of 100 : ");
        scanf("%d",&Science[k]);
        
    }
    for (int l = i-1; l < i; l++)
    {
        printf("Enter your marks for Maths out of 100 : ");
        scanf("%d",&Maths[l]);   
    }
    }

    printf("\n---------- Total Marks ----------\n");
    total(Hindi,Maths,Science,total_marks_each_student);

    printf("\n---------- Grade Report ----------\n");
    average(Studentid,Hindi,Maths,Science);

    printf("\n---------- Topper ----------\n");
    highest(total_marks_each_student,3,Studentid);
    
    return 0;
}