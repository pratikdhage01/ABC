#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    float marks[5];
};

int main() 
{
    struct Student s[5];
    float per[5];
    char studname[50];
    for (int i = 0; i < 5; i++)
     {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter marks for student %d in 5 subjects: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%f", &s[i].marks[j]);
        }
    }
    printf("Enter the name of the student whose marks you want to display: ");
    scanf("%s",&studname);

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(studname, s[i].name) == 0) {
            printf("Marks for %s in 5 subjects: ", s[i].name);
            for (int j = 0; j < 5; j++) {
                printf("%.2f ", s[i].marks[j]);
            }
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("Student with name %s not found.\n", studname);
    }

    // Calculate and display names and percentages of students who scored more than 75%
    printf("\nStudents who scored more than 75%%:\n");
    for (int i = 0; i < 5; i++) 
    {
        float totalMarks = 0;
        for (int j = 0; j < 5; j++) {
            totalMarks += s[i].marks[j];
        }
        per[i] = (totalMarks / 5);

        if (per[i] > 75) {
            printf("%s - %.2f%%\n", s[i].name, per[i]);
        }
    }

    return 0;
}
