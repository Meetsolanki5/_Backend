#include<iostream.h>
#include<conio.h>

const double costperhour=18.50;
const double costperminute=0.40;
const double costperdinner=20.70;

class Event
{
	char *eventName;
	char *firstName,*lastName;
	int numGuests,numMinutes,numServers;
	double costForOneServer,totalFoodCost,averageCost,totalCost,depositAmount;

	public:
		void getDetails()
		{
			cout<<"\nEnter Event Name : ";
			cin>>eventName;

			cout<<"\nEnter First Name : ";
			cin>>firstName;

			cout<<"\nEnter Last Name : ";
			cin>>lastName;

			cout<<"\nEnter Duration Of Event : ";
			cin>>numMinutes;
		}
		void calculate()
		{
			numServers=numGuests/20;
			if(numGuests%20 !=0)
			{
				numServers +=1;
			}

			double hours=numMinutes/60;
			double minutes=numMinutes%60;
			costForOneServer=(hours * costperhour)+(minutes * costperminute);

			totalFoodCost=numGuests * costperdinner;

			averageCost=totalFoodCost / numGuests;

			totalCost=totalFoodCost+(costForOneServer * numServers);

			depositAmount=totalCost * 0.25;
		}
		void display()
		{
			cout<<"\n********** Event Summary **********";
			cout<<"\nEvent : "<<eventName;
			cout<<"\nOrganizer : "<<firstName<<" "<<lastName;
			cout<<"\nGuests : "<<numGuests;
			cout<<"\nMinutes : "<<numMinutes;
			cout<<"\nServer Needed : "<<numServers;
			cout<<"\nCost For One Server : "<<costForOneServer;
			cout<<"\nTotal Food Cost : "<<totalFoodCost;
			cout<<"\nAverage Cost For One Person : "<<averageCost;
			cout<<"\nTotal Cost: "<<totalCost<<"rupees";
			cout<<"\nDeposit : "<<depositAmount<<"rupees";
			cout<<"\n****************************************";
		}
};
void main()
{
	Event e;
	clrscr();
	e.getDetails();
	e.calculate();
	e.display();

	getch();
}
