# include <stdio.h>


struct Student {
    int id;
    char name[100];
    int age;
    float mark[5];
    float average;

};

int main(){
     
     struct Student s1;
    printf("ENTER STUDENT DETAILS\nID : ");
    scanf("%d",&s1.id);

    printf("\nNAME : ");
    scanf("%99s",s1.name);

    printf("\nAGE : ");
    scanf("%d",&s1.age);
 float total=0;


    for(int i = 0; i < 5; i++)
{
    printf("Enter mark %d : ", i + 1);
    scanf("%f", &s1.mark[i]);

    total = total + s1.mark[i];
}
   s1.average = total / 5;
    printf("\nID : %d\n",s1.id);
    printf("NAME : %s\n",s1.name);
    printf("AGE : %d\n",s1.age);
    printf("Marks:\n");

for(int i = 0; i < 5; i++)
{
    printf("%.2f ", s1.mark[i]);
}
    printf("\nTotal : %.2f\n",total);
    printf("Average :%.2f\n ",s1.average);
    return 0;
}
