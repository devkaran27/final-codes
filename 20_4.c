#include<stdio.h>

struct student{
  
    char name[1];
  
    int age;
  
    float percentage;

};

void main(){ 
struct student s[5];

int i;

for(i=0; i<5; i++){

    printf("Enter name of student %d : ", i+1);
    gets(s[i].name);

    printf("Enter age of student %d : ", i+1);
    scanf("%d", s[i].age);

    printf("Enter percentage of student %d : ", i+1);
    scanf("%f", s[1].percentage);

}

}