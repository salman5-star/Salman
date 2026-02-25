#include <iostream>
using namespace std;
int main(){
	//variable declaration 
	int num1 , num2;
	cout <<"enter two integers:";
	cin >>num1 >>num2;
	//performing arithmetic operations 
	int sum = num1 + num2;
	int diff = num1-num2;
	int product = num1 * num2;
	//using double for division to ensure decimal precision if needed //
	double quotient = (double)num1 / num2;
	int remainder = num1 % num2;
	//displayimg results 
	cout <<"sum:" <<sum << endl;
	cout <<"difference:" <<diff <<endl;
	cout <<"product:" << product <<endl;
	cout <<"quotient" <<quotient <<endl;
	cout <<"remainder" <<remainder <<endl;
	return 0;
}