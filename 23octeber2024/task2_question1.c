
//Task2-Q1 
//Passing structure reference to a function(passing values using function)
//Bhargab Rudra Kalita
//23-10-2024

#include<stdio.h>
#include<conio.h>

struct student
{
	char name[25];
	int age;
	char grade[5];
};
display(struct student *x);

main()
{
	struct student s;
	printf("Enter student name:");
	scanf("%s",s.name);
	printf("Enter student age:");
	scanf("%d",&s.age);
	printf("Enter student grade:");
	scanf("%s",s.grade);
	display(&s);
	
}

display(struct student *x)
{
	printf("\nStudent Name: %s", x->name);
	printf("\nStudent Age: %d", x->age);
	printf("\nStudent Grade: %s", x->grade);
	printf("\n------------------");
	return(0);
}

