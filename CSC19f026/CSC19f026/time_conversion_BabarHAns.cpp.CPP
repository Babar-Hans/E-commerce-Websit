#include<iostream>
using namespace std;

int main()
{
	long input;
	long days,hours,minutes,seconds;
    
    cout<<":CALCULATE \"TIME_CONVERSIONS\":"<<endl<<endl;
    
	cout<<"Enter Integer Numbers Times In Seconds =";
	cin>>input;
	cout<<endl;
	
	days=input/(24*3600);
	input=input%(24*3600);
	
	hours=input/3600;
	input=input%3600;
	
	minutes=input/60;
	input=input%60;
	
	seconds=input;
	
	cout<<days<<" Days, ";
	cout<<hours<<" Hours,";
	cout<<minutes<<" Minutes, ";
	cout<<seconds<<" Seconds ";
	return 0;

//Babar_Hans CSC19F026  copyright!
}
