#include<bits/stdc++.h>
using namespace std;

//bit of 16 = 10000, 17 = 01111 so, n & n-1 = 0 hence n is power of two, similar 5 = 101 4 = 100 n & n-1 = 1
int main(){
	int n;
	cin>>n;

	if((n&(n-1)) == 0){
		cout<<"Yes it is power of 2"<<endl;
	}
	else{
		cout<<"Not power of 2"<<endl;
	}
}