// Write a program to Mathematic operation like 
// Addition, Subtraction, Multiplication, Division 
// Of two number using different parameters and Function Overloading 

//Addition 
#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}

int sum(int a, int b, int c)
{
	return a+b+c;
}

float sum(float a, float b)
{
	return a+b;
}
main()
{
	cout<<"Total= "<<sum(10,20)<<endl;
	cout<<"Total= "<<sum(10,20,30)<<endl;
	cout<<"Total= "<<sum(10.25f,78.65f)<<endl;
}