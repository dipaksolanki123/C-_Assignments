// Write a program to create simple calculator using class  

#include<iostream>
using namespace std;
class calculator
{
	int a,b;
	public:
		void inputData()
		{
			cout<<"Enter value of a :- "<<endl;
			cin>>a;
			cout<<"Enter value of b :- "<<endl;
			cin>>b;
		}
		void displayData() // Display Data
		{
			cout<<"The Subtraction of a and b is "<<a-b<<endl;
			cout<<"The Multiplication of a and b is "<<a*b<<endl;
			cout<<"The Devision of a and b is "<<a/b<<endl;
			cout<<"The Modulo of a and b is "<<a%b<<endl;
		}
};

main()
{
	calculator c1;
	c1.inputData();
	c1.displayData();
}