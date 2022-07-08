#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
	return a<b;
}

int main(){
	int v[] = {1,455,2,257,32,35};
	int n = sizeof(v)/sizeof(int);

	//we can also use greater<int>() instead of building comparetor function
	sort(v,v+n, greater<int>());
	// reverse(v,v+n);

	for(int x : v){
		cout<<x<<" ";
	}
}