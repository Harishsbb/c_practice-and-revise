#include <stdio.h>
#include <stdlib.h>

// stuct use for store all data type in one please we can use this datatype so many times
struct Student
{
    int id;
    char name[100];
    int age;
    float mark[5];
    float total;
    float average;
};

void addStudent(struct Student *s1)
{
    float total = 0.0f;
    printf("ENTER STUDENT DETAILS\nID : ");
    scanf("%d", &s1->id);

    printf("\nNAME : ");
    scanf("%99s", s1->name);

    printf("\nAGE : ");
    scanf("%d", &s1->age);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark %d : ", i + 1);
        scanf("%f", &s1->mark[i]);

        total += s1->mark[i];
    }
    s1->total = total;
    s1->average = total / 5;
}

void displayStudent(struct Student *s1)
{
    printf("\nID : %d\n", s1->id);
    printf("NAME : %s\n", s1->name);
    printf("AGE : %d\n", s1->age);
    printf("Marks:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", s1->mark[i]);
    }
    printf("\nTotal : %.2f\n", s1->total);
    printf("Average :%.2f\n ", s1->average);
}

void search_student(struct Student *s1, int count)
{
    int found=0;
    int id;
    printf("Enter student ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
    {
        if (s1[i].id == id)
        {
            printf("\nID : %d\n", s1[i].id);
            printf("NAME : %s\n", s1[i].name);
            printf("AGE : %d\n", s1[i].age);
            printf("Marks:\n");

            for (int j = 0; j < 5; j++)
            {
                printf("%.2f ", s1[i].mark[j]);
            }
            printf("\nTotal : %.2f\n", s1[i].total);
            printf("Average : %.2f\n", s1[i].average);

                    found = 1;
                     break;
        }
    }   
    if (found == 0)
{
    printf("Student not found!\n");
}
}

void Update_Student(struct Student *s1, int count){
            int id;
            int found =0;
            float total =0.0f;

            printf("Enter student id to update : ");
            scanf("%d",&id);

            for(int i = 0; i < count; i++)
            {
                if(s1[i].id == id)
                {
                    found =1;

                    printf("Enter New Name :");
                    scanf("%99s",s1[i].name);

                    printf("Enter New Age: ");
                    scanf("%d", &s1[i].age);

                    total = 0.0f;

                    for(int j = 0; j < 5; j++)
                      {
                    printf("Enter New Mark %d: ", j + 1);
                    scanf("%f", &s1[i].mark[j]);

                    total += s1[i].mark[j];
                     }

                        s1[i].total = total;
                        s1[i].average = total / 5;

                        printf("Student updated successfully!\n");
                        break;
                    }
                }
                        if(found == 0)
                        {
                            printf("Student not found!\n");
                        }
                }
            
void Delete_Student(struct Student *s1, int *count)
{
    int id;
    int found = 0;

    printf("Enter Student ID to delete: ");
    scanf("%d", &id);

    for(int i = 0; i < *count; i++)
    {
        if(s1[i].id == id)
        {
            // Shift students left
            for(int j = i; j < *count - 1; j++)
            {
                s1[j] = s1[j + 1];
            }
            // Decrease count
            (*count)--;

            // found = 1;
                found =1;
            // print success
                printf("Account successfully deleted");
            // break;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student not found!\n");
    }
}

void Sort_Students(struct Student *s1, int count)
{
    struct Student temp;

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = 0; j < count - i - 1; j++)
        {
            if(s1[j].id > s1[j + 1].id)
            {
                temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }

    printf("Students sorted successfully!\n");
}
int main()
{
    struct Student students[100];
    int count = 0;
    int choice;
    do
    {
        printf("===== STUDENT MANAGEMENT =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3.Search student:\n");
        printf("4.Update Student:\n");
        printf("5.Delete Student:\n");
        printf("6.Sort_Students:\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            if (count < 100)
            {
                addStudent(&students[count]);
                count++;
            }
            else
            {
                printf("Student list is full!\n");
            }
            break;

        case 2:
            if (count == 0)
            {
                printf("No students available.\n");
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    displayStudent(&students[i]);
                }
            }
            break;

        case 3:
        if(count == 0)
        {
            printf("No students available.\n");
        }
        else
        {
            search_student(students, count);
        }
        break;

        case 4:
            if(count == 0)
            {
                printf("No students available.\n");
            }
            else
            {
                Update_Student(students, count);
            }
            break;

        case 5:
            if(count == 0)
            {
                printf("No students available.\n");
            }
            else
            {
                Delete_Student(students, &count);
            }
            break;
        case 6:
            if(count == 0)
            {
                printf("No students available.\n");
            }
            else
            {
                Sort_Students(students, count);
            }
            break;

        case 7:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
        }
    } while (choice != 7);

    return 0;
}