#include <stdio.h>
#include <stdlib.h>

struct stud{
    int rollno;
    char name[50];
    int marks[4];
    float cgpa;
    struct stud *next;
};

void main(){
    int n;
    float avg;
    struct stud *first=NULL, *last=NULL;
    printf("Enter Number of Students:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        struct stud *new = (struct stud*)malloc(sizeof(struct stud));
        printf("Student Data : %d",i);
        printf("\nROLL.NO:");scanf("%d",&new->rollno);
        printf("NAME:");scanf(" %[^\n]",new->name);
        for (int j=1;j<=4;j++) {
            printf("Subject %d Mark:",j);scanf("%d",&new->marks[j]);
            avg+=new->marks[j];
        }
        new->cgpa = avg/4;
        if (first==NULL){
            first = last = new;
        }
        else{
            last->next=new;
            last=new;
        }
    }
    struct stud *temp = first;
    while(temp!=NULL){
    printf("ROLLNO:%d\nNAME:%s\nCGPA:%f\n",temp->rollno,temp->name,temp->cgpa);
    temp = temp->next;
    }
}