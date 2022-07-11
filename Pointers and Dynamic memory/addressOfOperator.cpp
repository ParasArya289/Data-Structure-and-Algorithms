#include<iostream>
using namespace std;

int main(){
	int x = 10;
	int y = 5.5;

	//address
	cout<<&x<<endl;
	cout<<&y<<endl;

	//pointer variable
	int * xptr = &x;
	cout<<xptr<<endl;

	cout<<&xptr<<endl;

	//pointer variable of pointer variable
	int ** xptrptr = &xptr;
	cout<<xptrptr<<endl;

}