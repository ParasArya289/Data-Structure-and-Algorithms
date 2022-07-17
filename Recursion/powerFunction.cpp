#include<iostream>
using namespace std;

int power(int num, int pow){
	if(pow == 0){
		return 1;
	}
	return num * power(num, pow-1);
}

int fastPower(int num, int pow){
	if(pow == 0){
		return 1;
	}
	int subProb = fastPower(num,pow/2);
	int subProbsq = subProb*subProb;

	if(pow&1){
		return num * subProbsq;
	}
	return subProbsq;
}

int main(){
	int num,pow;
	cin>>num>>pow;

	cout<<power(num,pow)<<endl;
	cout<<fastPower(num,pow)<<endl;

}
