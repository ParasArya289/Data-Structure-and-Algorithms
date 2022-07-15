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

void updateithBit(int &n, int i,int v){
	clearithBit(n,i);
	int mask = (v<<i);
	n = n|mask;
}

void clearlastithBit(int &n,int i){
	int mask = (-1 << i);
	n = n & mask;
}

void clearBitsInRange(int &n, int i, int j){
	int a = (~0)<<(j+1);
	int b = (1<<i)-1;
	int mask = a|b;
	n = n & mask;
}

int main(){
	int n = 31;
	int i = 1;
	int j = 3;
	// cin >>i;

	// cout<<getIthbit(n,i)<<endl;

	// setithBit(n,i);

	// clearithBit(n,i);
	// updateithBit(n,i,1);

	// clearlastithBit(n,i);
	clearBitsInRange(n,i,j);

	cout<<n<<endl;
}