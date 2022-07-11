#include<iostream>
using namespace std;

//we can use & to convert the value to PASS BY REFERENCE from PASS BY VALUE.
void incomeTax(int & income){
	float tax = 0.10;
	income = income - income*tax;
}

int main(){
	int income;
	cin>>income;
	cout<<"Without tax: "<< income<<endl;

	incomeTax(income);
	cout<<"With Tax: "<<income<<endl;
}