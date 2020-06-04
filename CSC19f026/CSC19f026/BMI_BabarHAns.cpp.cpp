#include <iostream>
using namespace std;

int main()
{
	double BMI, weight, height;
	cout<<":CALCULATE \"BMI\":"<<endl<<endl;
	
	cout<< "Enter Weight in kilogram :";
	cin>>weight;
	cout<<endl;
	
	cout<< "Enter Height in Meters :";
	cin>>height;
	cout<<endl;
	
	BMI = weight / (height*height);
	
	cout<<"Body Mass Index (BMI): "<<BMI<<endl;
	
	if(BMI<18.5)
		cout<< "\"You are Underweight\" "<<endl<<endl;	
		if(BMI>18.5 && BMI<24.9)
			cout<< "\"You are Normal\""<<endl;
			if(BMI>25 && BMI<29.9)
				cout<< "\" You are Overweight\""<<endl;
				if(BMI>30)
					cout<< " \"You are Obese\" "<<endl;
	
	
return 0;
	
//Babar_Hans CSC19F026  copyright!
}
