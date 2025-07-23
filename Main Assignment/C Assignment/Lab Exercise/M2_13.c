#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *f1;
	char *name;
	
	f1=fopen("M2_13.txt","w");
	printf("\nEnter the Name : ");
	gets(name);
	
	fprintf(f1,"%s",name);
	fclose(f1);
	printf("\nfile Written Successfully");
	
	f1=fopen("M2_13.txt","r");
	printf("\nName is : %s",name);
	fclose(f1);
	
	return 0;
	
	?
}
