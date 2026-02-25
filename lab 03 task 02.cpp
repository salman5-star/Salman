#include <iostream>
using namespace std;
int main (){
   int num; 
   
   cout<<"enter an integer:" ;
   cin>>num;
   if(num>0 && num<100){
   	cout<<"the number is greter than 0 and less than 100."<<endl;
   }
   else{
   	cout<<"the number does not meet both condition."<<endl;
   }   



	return 0;
}
