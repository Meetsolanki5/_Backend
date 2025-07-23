#include<iostream.h>
#include<conio.h>

class rectangle
{
	float length,width;

	public:
		void getValue()
		{
			cout<<"\nEnter length of Rectangle : ";
			cin>>length;
			cout<<"\nEnter Width Of Rectangle : ";
			cin>>width;
		}
		float areaofR()
		{
			return length *  width;
		}
};
void main()
{
	rectangle r;
	float area;
	clrscr();

	r.getValue();
	area=r.areaofR();
	cout<<"\nArea Of Rectangle Is : "<<area;

	getch();
}

