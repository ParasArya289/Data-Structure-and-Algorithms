#include<iostream>
using namespace std;
string spell[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printSpell(int n){
	if(n == 0){
		return;
	}

	int last_disgit = n%10;
	printSpell(n/10);
	cout<<spell[last_disgit]<<" ";
}

int main(){
	int n;
	cin>>n;
	printSpell(n);
	return 0;
}