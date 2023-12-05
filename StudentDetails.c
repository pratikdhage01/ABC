#include<stdio.h>
struct student
{
    char name[50];
    char email[25];
    long int mob_no;
};
int main()
{
    struct student s1[10];
    for(int i = 0; i < 2; i++)
    {
        printf("Enter your name: ");
        scanf("%s", s1[i].name);
        printf("Enter Your Email id: ");
        scanf("%s", s1[i].email);
        printf("Enter Your Mobile Number: ");
        scanf("%ld", &s1[i].mob_no);
    }
    printf("\n \n");
    for(int i = 0; i < 2; i++)
    {
        printf("Student %d \n", i + 1);
        printf("Name: %s \n", s1[i].name);
        printf("Phone Number: %ld \n", s1[i].mob_no);
        printf("Email id: %s \n", s1[i].email);
    }
    return 0;
} 
