# include <stdio.h>
#include <stdlib.h>


// stuct use for store all data type in one please we can use this datatype so many times 
struct Student {
    int id;
    char name[100];
    int age;
    float mark[5];
    float total;
    float average;

};

void addStudent(struct Student*s1){
    float total = 0.0f;
    printf("ENTER STUDENT DETAILS\nID : ");
    scanf("%d",&s1->id);

    printf("\nNAME : ");
    scanf("%99s",s1->name);

    printf("\nAGE : ");
    scanf("%d",&s1->age);


    for(int i = 0; i < 5; i++)
{
    printf("Enter mark %d : ", i + 1);
    scanf("%f", &s1->mark[i]);

  total += s1->mark[i];
}
s1->total = total;
s1->average = total / 5;
}


void displayStudent(struct Student*s1){
     printf("\nID : %d\n",s1->id);
     printf("NAME : %s\n",s1->name);
     printf("AGE : %d\n",s1->age);
     printf("Marks:\n");
    
    for(int i = 0; i < 5; i++)
    {
     printf("%.2f ", s1->mark[i]);
    }
     printf("\nTotal : %.2f\n",s1->total);
     printf("Average :%.2f\n ",s1->average);
 

}

int main(){
    struct Student s1;
    int choice;
    do{
        
        printf("===== STUDENT MANAGEMENT =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d",&choice);
        switch(choice){
            case 1:
            addStudent(&s1);
            break;
            
            case 2:
            displayStudent(&s1);
            break;
            
            case 3:
            printf("Exiting...\n");
            break;
        
            default:
            printf("Invalid choice\n");
        
        }
}while(choice != 3);
    

    return 0;
}