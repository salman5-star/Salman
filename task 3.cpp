//intialize a variable 
//print it 
#include <iostream>// needed for input/output 
using namespace std;// allows use of cout directly 
int main (){
	int a = 10 ; // integer variable intiallized with value 10 
	cout << a <<endl; // print value of a 
	// 1. change 10 by another integer and observe the result 
	a = 25; // integer with other integer value 
	cout <<a <<endl; // output will be 25
	//2. change it to friction number and observe the result 
	a = 10.5 ; //fraction assigned to int 
	cout <<a<<endl;//the answer will be still 10 . because int cannot store decimal values . the fraction part is discarded
	//3. replace int by float and now enterthe friction and observe result 
	float b =10.5 ;// as float can store decimals point . it gives 10.5 ans
	cout <<b <<endl;// output will be 10.5
	//4. with float enter integer and observe result .
	 b = 10 ;//integer store in float 
	cout <<b; // so it will give output
	return 0;
}