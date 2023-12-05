#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    char mail[20];
    long int mob[10];
    float marks[5];
    float total,per;
};
struct employee
{
    char name[50];
    char mail[20];
    char qualification[15];
    int experience;
    float salary;
};
int main()
{
    struct student s[5];
    struct employee staff[5];
    printf("Enter details for 5 students : \n");
    for(int i=1;i<5;i++)
    {
    printf("Student : %d \n",i+1);
    printf("Name: ");
    scanf("%s",s[i].name);
    printf("Email: ");
    scanf("%s",s[i].mail);
    printf("Mobile Number : ");
    scanf("%d",s[i].mob);
    printf("Enter the marks of the students scored in 5 subjects ",i+1);
    for(int j=0;j<5;j++)
    {
        scanf("%f",&s[i].marks[j]);
        s[i].total += s[i].marks[j];
    }
    s[i].per=(s[i].total/5);
    printf("\n");
    }
    printf("Enter 5 Staff members Details : ");
    for(int i=0;i<5;i++)
    {
        printf("Staff member ",i+1,"\n");
        printf("Name : \n");
        scanf("%s",staff[i].name);
        printf("Email id : \n");
        scanf("%s",staff[i].mail);
        printf("qualification : \n");
        scanf("%d",staff[i].qualification);
        printf("Experience : \n");
        scanf("%d",staff[i].experience);
        printf("Salary : \n");
        scanf("%d",staff[i].salary);   
    }
    printf("Student details \n");
    for(int i=0;i<5;i++)
    {
        printf("Student %d: \n",i+1);
        printf("Name : %s \n",s[i].name);
        printf("Email : %s",s[i].mail);
        printf("Mobile Number : %d",s[i].mob);
        printf("Total Marks : %f",s[i].marks);
        printf("Percentage: %.2f%%\n", s[i].per);
        printf("\n");
    }
    printf("Staff Details: \n");
    for (int i = 0; i < 5; i++)
     {
        printf("Staff Member %d:\n", i + 1);
        printf("Name: %s\n", staff[i].name);
        printf("Email: %s\n", staff[i].mail);
        printf("Qualification: %s\n", staff[i].qualification);
        printf("Experience: %d years\n", staff[i].experience);
        printf("Salary: %.2f\n", staff[i].salary);
        printf("\n");
    }
    return 0;
}



    
