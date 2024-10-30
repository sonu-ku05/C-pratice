#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char *name;
    int rollno;
    float marks;
};

int main() {
    struct student s1;
    struct student *p = &s1;
    p->name = (char*)malloc(30 * sizeof(char));
    if (p->name == NULL) { 
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter name: \n");
    fgets(p->name,30,stdin);
    printf("Enter Roll Number: \n");
    scanf("%d",&p->rollno);
    printf("Enter Marks: \n");
    scanf("%f",&p->marks);
    printf("Name: %s Roll Number: %d \nMarks: %.2f\n",p->name,p->rollno,p->marks);
    free(p->name);
    return 0;

}