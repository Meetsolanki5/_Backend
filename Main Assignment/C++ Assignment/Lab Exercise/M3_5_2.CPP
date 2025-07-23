#include<iostream.h>
#include<conio.h>

void main()
{
	int a[2][2],b[2][2],sum[2][2],i,j;
	clrscr();

	cout<<"\nEnter Element Of A : ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\nEnter["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];
		}
		cout<<"\n";
	}

	cout<<"\nEnter Element Of B : ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\nEnter["<<i<<"]["<<j<<"] :";
			cin>>b[i][j];
		}
		cout<<"\n";
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
		cout<<"\n";
	}

	cout<<"\nMatrix A : \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"\nMatrix B : \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\n";
	}
	cout<<"\nMatrix Sum : \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<sum[i][j];
		}
		cout<<"\n";
	}
	getch();
}