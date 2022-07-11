#include<iostream>
using namespace std;

int main(){

	//here &y is reference varibale, reference variable can be created to form alias name or to reference to same variable.
	int x = 10;
	int &y = x;

	//by incrementing x, it will also increment y, so here output will be 12
	x++;
	y++;

	cout<<x<<endl;
	cout<<y<<endl;
}