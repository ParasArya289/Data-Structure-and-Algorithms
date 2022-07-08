#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> v){
	int n = v.size();

	for(int i = 1; i <= n-1; i++){
	int current = v[i];
	int prev = i-1;

	while(prev >= 0 and v[prev] > current){
		v[prev + 1] = v[prev];
		prev = prev - 1;
	}
	v[prev + 1] = current;
	}
	return (v);
}

int main(){
	std::vector<int> v = {4,5,2,3,1};

	vector<int> a = insertionSort(v);

	for(int x : a){
		cout<<x<<" ";
	}
	return 0 ;

}