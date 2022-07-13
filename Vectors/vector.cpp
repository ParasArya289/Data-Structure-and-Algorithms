#include<iostream>
#include<vector>
using namespace std;

int main(){
	std::vector<int> arr = {1,2,3};
	cout<<arr.size()<<endl;

	std::vector<int> a(10,7);

	arr.pop_back();

	arr.push_back(16);

	for(int x : arr){
		cout<<x<<" ";
	}
	cout<<endl;
	for(int x : a){
		cout<<x<<" ";
	}
}
