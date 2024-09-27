//program for string length
//bhargab rudra kalita,32
//27 sept 24
#include<stdio.h>
#include<string.h>
int main()
{
  char fname[20];
  int x;
  printf("\nEnter first name:");
  scanf("%s",fname);
  x=strlen(fname);
  printf("\nString Length:%d",x);
  return 0;	
}

