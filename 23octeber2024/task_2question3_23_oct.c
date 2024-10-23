//Task2:Question3,23Oct24
//using call by  value
//bhargab r kalita

#include<stdio.h>
#include<conio.h>

struct student
{
	char name[25];
	int marksM; 
	int marksE;
	int marksS;
};
 
int calc (struct student *x);
main()
{
	int i, total;
	struct student s;
	
	printf("\nEnter student name:");
	scanf("%s",s.name);
	printf("\nEnter marks for Maths:");
	scanf("%d",&s.marksM);
	printf("\nEnter marks for English:");
	scanf("%d",&s.marksE);
	printf("\nEnter marks for Science:");
	scanf("%d",&s.marksS);
	
	total= calc(&s);
	
	printf("\nName:%s",s.name);
	printf("\nMarks in Maths:%d",s.marksM);
	printf("\nMarks in English:%d",s.marksE);
	printf("\nMArks in Science:%d",s.marksS);
	printf("\nTotal Marks:%d",total);
	
	return(0);
	
}
int calc(struct student *x)
{
	int total;
	total= x->marksM + x->marksE + x->marksS;
	return(total);
}
