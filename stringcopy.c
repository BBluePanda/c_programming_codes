//program for stringcopy
//bhargab rudra kalita,32
//27 sept 2024

#include<stdio.h>
#include<string.h>
int main(){
	char fname[20],cname[20];
	printf("\nEnter first name:");
	scanf("%s",fname);
	strcpy(cname,fname);
	printf("\nCopied Name:%s",cname);
	return 0;
}
