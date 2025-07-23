#include<iostream.h>
#include<conio.h>

class Bank
{
	int acno;
	char *cname;
	double balance;

	public:
		void openAccount();
		void deposit();
		void withdraw();
		void checkBalance();
		void showDetails();
};
void Bank::openAccount()
{
	cout<<"\nEnter Account Number : ";
	cin>>acno;
	cout<<"\nEnter Customer Name : ";
	cin>>cname;
	cout<<"\nInitial Balance : ";
	cin>>balance;
}
void Bank::deposit()
{
	double amount;
	cout<<"\nEnter Amount : ";
	cin>>amount;
	if(amount>0)
	{
		balance=balance+amount;
	}
	else
	{
		cout<<"\nInvalid Amount";
	}
}
void Bank::withdraw()
{
	double amount;
	cout<<"\nEnter Withdraw Amount : ";
	cin>>amount;
	if(amount>0)
	{
		if(amount<=balance)
		{
			balance=balance-amount;
		}
		else
		{
			cout<<"\nWithdraw Amount Is Greater Then Your Balance";
		}
	}
	else
	{
		cout<<"\nInvalid Amount Entered";
	}
}
void Bank::checkBalance()
{
	cout<<"\nCurrent Balance : "<<balance;
}
void Bank::showDetails()
{
	cout<<"\nAccount Number : "<<acno;
	cout<<"\nCustomer Name : "<<cname;
	cout<<"\nInitial Balance : "<<balance;
}

void main()
{
	Bank b;
	int choice,a;
	clrscr();

	cout<<"\n**********************************************************";
	b.openAccount();
	do{
	cout<<"\n1.Deposit";
	cout<<"\n2.Withdraw";
	cout<<"\n3.Check Balance";
	cout<<"\n4.Show Details";
	cout<<"\n5.Exit";
	cout<<"\n***********************************************************";
	cout<<"\nEnter Your Choice : ";
	cin>>choice;
	cout<<"\n***********************************************************";
	if(choice==1)
	{
		b.deposit();
		cout<<"\n***********************************************************";
	}
	else if(choice==2)
	{
		b.withdraw();
		cout<<"\n***********************************************************";
	}
	else if(choice==3)
	{
		b.checkBalance();
		cout<<"\n***********************************************************";
	}
	else if(choice==4)
	{
		b.showDetails();
		cout<<"\n***********************************************************";
	}
	else if(choice==5)
	{
		cout<<"\nThank You For Using Our Services";
		cout<<"\n***********************************************************";
	}
	else
	{
		cout<<"\nInvalid Choice Please Try Again";
		cout<<"\n***********************************************************";
	}
	cout<<"\nDo you Want To Continue? (Yes=1||No=2)";
	cin>>a;
	}while(a!=2);
	getch();
}