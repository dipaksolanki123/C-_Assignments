//Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
//Data member of batsman. Total runs, Average runs and best performance. 
//Member functions input data, calculate average runs, Display data. (Single Inheritance) 

#include<iostream>
using namespace std;
class cricketer 
{
 	int total_runs; // Data member
	int ave_runs;
	int best_perf;
 	public:
		void inputdata()  // member function (data input)
		{
			cout<<"Enter Total Runs :- "<<endl;
			cin>>total_runs;	
			cout<<"Enter Average Runs :- "<<endl;
			cin>>ave_runs;
			cout<<"Enter Best Performance :- "<<endl;
			cin>>best_perf;
		}
			
 };
 
 class batsman:public cricketer
 {
 	public:
 		void bat()
 		{
 			cout<<"\nBest Performance";
 			
		}
 };
 
 main()
 {
 	batsman obj;
 	obj.inputdata();
 	obj.bat() ;
 }