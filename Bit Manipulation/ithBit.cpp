#include<iostream>
using namespace std;

int getIthbit(int n, int i){
	int mask = (1 << i);

	return (n & mask) > 0 ? 1 : 0;
}

void setithBit(int &n,int i){
	int mask = (1 << i);

	n = (n|mask);
}

void clearithBit(int &n, int i){
	int mask = ~(1 << i);

	n = (n & mask);
}

int main(){
	int n = 13;
	int i;
	cin >>i;

	// cout<<getIthbit(n,i)<<endl;

	// setithBit(n,i);

	clearithBit(n,i);

	cout<<n<<endl;
}