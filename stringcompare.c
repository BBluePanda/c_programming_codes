//program for string compare
//bhargab rudra kalita,32
//27 sept 24
#include<stdio.h>
#include<string.h>
int main()
{
	char fname[20],sname[20];
	int x;
	printf("\nEnter first name:");
	scanf("%s",fname);
	
	printf("\nEnter second name:");
	scanf("%s",sname);
	
	x=strcmp(fname,sname);
	
	if(x==0)
	 printf("\nThe strings are the same\n");
	else
	 printf("\nThe strings are not same\n");
	 
	 return 0; 
}
