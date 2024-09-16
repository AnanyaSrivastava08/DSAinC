#include<stdio.h>
#include<stdlib.h>
struct Student {
int id;
char name[50];
float marks;
};
int main() {
  struct Student *students=(struct Student*)malloc(3* sizeof(struct student));
if(students==NULL) {
printf("Memory allocation sccessfull"(;
  return 1;
}
for(int i=0; i<3; i++) {
students[i].id=i+1
  printf("Enter name of student %d:", i+1);
scanf("%s", students[i].name);
 printf("Enter marks of student %d:", i+1);
scanf("%f", students[i].marks);
}
for(int i=0; i<3; i++) {
 printf("\nStudent ID:%d\n", (students+i)->id);
printf("nStudent Name:%s", (students+i)->name);
printf("Student Marks:%.2f", (students+i)->marks);
};
return 0;
}
free(students)
