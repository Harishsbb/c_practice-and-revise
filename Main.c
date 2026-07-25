# include <stdio.h>


struct Student {
    int id;
    char name[100];
    int age;
    float mark[5];
    float average;

};

int mark(int mark[5]){
    int total=0;
    for(int i=0;i<5;i++){
       total= mark[i]=mark[i+1];
    }
    int average=total/5;
}
int main(){
     
     struct Student s1;
    printf("ENTER STUDENT DETAILS\nID : ");
    scanf("%d",&s1.id);

    printf("\nNAME : ");
    scanf("%99s",s1.name);

    printf("\nAGE : ");
    scanf("%d",&s1.age);

    printf("\nID : %d\n",s1.id);
    printf("NAME : %s\n",s1.name);
    printf("AGE : %d\n",s1.age);
    printf("Total : %d\n",s1.mark[5]);
    return 0;
}
