//program for string catenation
//bhargab rudra kalita
//27 sept 24
#include<stdio.h>
#include<string.h>
int main()
{
	char fname[20],sname[20],cname[20];
	printf("\nEnter first name:");
	scanf("%s",fname);
	printf("\nEnter second name:");
	scanf("%s",sname);
	strcat(fname,sname);
	printf("\nCatenated Name:%s",fname);
	return 0;
}
