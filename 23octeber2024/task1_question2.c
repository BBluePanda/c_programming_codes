//Task1-Q2 passing structure array using pointer
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
void display (struct student *x);
main()
{
	int i;
	struct student s[3];
	
	
	for(i=1;i<=3;i++)
	{
	printf("Enter student name:");
	scanf("%s",s[i].name);
	printf("Enter student age:");
	scanf("%d",&s[i].age);
	printf("Enter student grade:");
	scanf("%s",s[i].grade);
	}
	display(&s[3]);
}
void display(struct student *x)
{
	int i;
	for(i=1;i<=3;i++)
	{
	printf("\nStudent Name: %s", x[i].name);
	printf("\nStudent Age: %d", x[i].age);
	printf("\nStudent Grade: %s", x[i].grade);
	printf("\n------------------");
	}
	return(0);
}
