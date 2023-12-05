#include<stdio.h>
int main()
{
    int marks[5];
    int total =0 ;
    for(int i=0;i<5;i++)
    {
        printf("Enter Your marks of subject : ", i+1);
        scanf("%d",&marks[i]);
        total = total + marks[i];
    }
    float per = total /500.0*100.0;
    printf("Your Total Marks are : %d \n",total);
    printf("Your percentage is : %f \n",per);
    if(per==100.0)
    printf("Gold Medalist");
    else if (per>75)
    printf("Distinction");
    else if(per>60)
    printf("First Class");
    else if(per>45)
    printf("Second Class");
    else 
    printf("FAIL!"); 
}