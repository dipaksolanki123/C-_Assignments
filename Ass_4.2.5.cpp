//  Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
//  Data member of batsman. Total runs, Average runs and best performance. 
//  Member functions input data, calculate average runs, Display data. (Single Inheritance)  

#include<iostream>
 using namespace std;
 class cricketer  // data member
 {
 	public:
		void avgrun()    //member functions
		{
			cout<<"Average Runs of Batsman";	
		} 	
 };
 
 class bastman:public cricketer
 {
 	public:
 		void t_runs()
 		{
 			cout<<"\nTotal Runs of Batsman";
		}
		void avg_runs()
 		{
 			cout<<"\nAverage Runs of Batsman";
		}
		void bestperf()
 		{
 			cout<<"\nBest Performance";
		}
 };
 
 main()
 {
 	bastman obj;
 	obj.t_runs();
 	obj.avg_runs();
 	obj.bestperf();
 }