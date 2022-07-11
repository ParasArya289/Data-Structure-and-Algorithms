#include<iostream>
using namespace std;

int main(){
	string x = "value";

	string *xptr = &x;
	cout<<xptr;

	//by using * before pointer we can access its value, here * is working as derefrence operator. 
	cout<<*xptr;
}