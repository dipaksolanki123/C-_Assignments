// Write a program of Addition, Subtraction, Division, Multiplication using constructor. 

#include<iostream>

using namespace std;

class Student
{
	public:
		Student() // Default Constructor
		{
			cout<<"Addition, Subtraction, Division, Multiplication using Constructor";
		}
		Student(int a, int b)
		{
			cout<<"\n\n Addition of a and b = "<<a + b; // Addition
			
			cout<<"\n\n Subtraction of a and b = "<<a - b; // Subtraction
			
			cout<<"\n\n Division of a and b = "<<a / b; // Division
			
			cout<<"\n\n Multiplication of a and b  = "<<a * b; // Multiplication
		}
};

main()
{
	Student s1 = Student();
	Student s2 = Student(40,20);
}

