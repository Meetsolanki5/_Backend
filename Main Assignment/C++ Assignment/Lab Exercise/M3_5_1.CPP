#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[10],i;
	int sum=0;
	float avg;
	clrscr();

	cout<<"\nEnter Element : ";

	for(i=0;i<10;i++)
	{
		cout<<"\nEnter Element "<<i+1<<":";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	avg=sum/10;

	cout<<"\nSum Of Number Is : "<<sum;
	cout<<"\nAverage Of Sum Is : "<<avg;

	getch();
}