//Task2:Question3,23Oct24
//using call by reference
//Bhargab R kalita

#include<stdio.h>
#include<stdlib.h>  

struct student
{
    char name[25];
    int marksM;
    int marksE;
    int marksS;
};

int* calc(struct student *x);

int main()
{
    int *total;
    struct student s;
    
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter marks for Maths: ");
    scanf("%d", &s.marksM);
    printf("Enter marks for English: ");
    scanf("%d", &s.marksE);
    printf("Enter marks for Science: ");
    scanf("%d", &s.marksS);
    
    total = calc(&s);
    
    printf("Name: %s\n", s.name);
    printf("Marks in Maths: %d\n", s.marksM);
    printf("Marks in English: %d\n", s.marksE);
    printf("Marks in Science: %d\n", s.marksS);
    printf("Total Marks: %d\n", *total);
    
    free(total);
    
    return 0;
}

int* calc(struct student *x)
{
    int *total = (int *)malloc(sizeof(int));  
    *total = x->marksM + x->marksE + x->marksS;
    return total;
}

