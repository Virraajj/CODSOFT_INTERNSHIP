
#include<iostream>
using namespace std;

float sum(float a,float b)// ADDITION
{
	float c;
	c = a+b;
	return c;
}
float sub(float a,float b)//  SUBTRACTION
{
	float c;
	c = a-b;
	return c; 
}
float mul(float a,float b)// MULTIPLICATION
{
	float c;
	c = a*b;
	return c;
}
float div(float a,float b)//  DIVISION
{
	float c;
	c = a/b;
	return c;
}

int main()
{
	int choice;
	float x,y,z;
	
	do
	{
		cout<<"\n\n1--ADDITION \n2--SUBTRACTIO \n3--MULTIPLICATION \n4--DIVISION \n5--EXIT";
		cout<<"\nENTER YOUR CHOICE=";
		cin>>choice;
		//if (choice<5):
			cout<<"\nENTER THE TWO NUMBERS=\n";
		
		cin>>x>>y;
		switch(choice)
		{
			case 1:
				z = sum(x,y);
				cout<<"\nADDITION=\t"<<z;
				break;
			case 2:
				z = sub(x,y);
				cout<<"\nSUBTRACTION=\t"<<z;
				break;
			case 3:
				z = mul(x,y);
				cout<<"\nMULTIPLICATION=\t"<<z;
				break;
			case 4:
				z = div(x,y);
				cout<<"\nDIVISION=\t"<<z;
				break;
			case 5:
				break;
		}
	}while(choice<5);
	return 0;
}
