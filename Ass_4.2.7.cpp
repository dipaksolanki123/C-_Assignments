// Create a class person having members name and age. Derive a class student having member percentage. 
// Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. 
// Write also Main function (Multiple Inheritance) 

#include<iostream>
using namespace std;
class person 
{
	public:
		void name()
		{
			cout<<" Name:- Dipak";
		}
		
	public:
		void age()
		{
			cout<<"\n Age:- 25";
		}
};

class student
{
	public:
		void percentage()
		{
			cout<<"\n Percentage:- 85%";
		}
};

class teacher:public person, public student
{
	public:
		void mem_salary()
		{
			cout<<"\n Member Salary :- 25,000";
		}
};

main()
{
	teacher obj2;
	obj2.name();
	obj2.age();
	obj2.percentage();
	obj2.mem_salary();
}

