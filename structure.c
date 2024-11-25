#include<stdio.h>

struct studentsdetail{

    int rollnumber;
    int marks[3];
    int total;
    float per;
};

int main()
{
    struct studentsdetail s1[50];
    for(int i=0;i<2;i++)
    {
        s1[i].total=0;
        s1[i].per=0.0;
        
        printf("enter the roll number");
        scanf("%d",&s1[i].rollnumber);

        printf("enter the marks");
        for (int j = 0; j < 3; j++)
        {
           scanf("%d",&s1[i].marks[j]);
        }
        for (int j = 0; j < 3; j++)
        {
            s1[i].total+=s1[i].marks[j];
        }
        s1[i].per=s1[i].total/3;

        printf("roll number is %d\n",s1[i].rollnumber);    
        printf("total is %d\n",s1[i].total);    
        printf("per is %f\n",s1[i].per);    
    }    
    return 0;

    
}