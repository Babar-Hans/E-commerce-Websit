#include<iostream>
using namespace std;

int main()
{

double hourlywage, hours, withHolding_Percentage, netPay=0;

cout<<":CALCULATE \"WEEKLY_NETPAY\":"<<endl<<endl;

cout<<endl<<"Enter Your HourlyWage =";
cin>>hourlywage;

cout<<endl<<"Enter Your Working Hours or Hour =";
cin>>hours;

cout<<endl<<"Enter WithHolding_Percentage =";
cin>>withHolding_Percentage;

netPay=( hours * hourlywage * 7 ) - ( hours * hourlywage * 7 * withHolding_Percentage / 100 );

cout<<endl<<endl<<"\"Your Weekly NETPAY\" =";
cout<<netPay<<endl<<endl;


return 0;

//Babar_Hans CSC19F026  copyright!
}
