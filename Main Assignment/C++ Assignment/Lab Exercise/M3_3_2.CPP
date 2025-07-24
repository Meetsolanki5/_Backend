#include<iostream.h>
#include<conio.h>

void main()
{
	int secretNumber,guess;
	clrscr();

	secretNumber=

	while(true)
	{
		cout<<"\nEnter your Guess : ";
		cin>>guess;

		if(guess<secretNumber)
		{
			cout<<"\nToo Slow";
		}
		else if(guess>secretNumber)
		{
			cout<<"\nToo High";
		}
		else
		{
			cout<<"\ncorrect Guess";
		}
	}
	getch();
}