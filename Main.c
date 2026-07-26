# include <stdio.h>


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
    addStudent(&s1);
    displayStudent(&s1);

    return 0;
}