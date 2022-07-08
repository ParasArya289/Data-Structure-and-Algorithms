#include<iostream>
#include<vector>
using namespace std;

int main(){
	// vector<int> arr = {1,2,3,4,5,6};

	//Fill constructor
	std::vector<int> arr(10,7);

	arr.pop_back(); //no arguments
	arr.push_back(16);


	for(int i = 0; i < arr.size(); i++){
		cout<<arr[i]<<endl;
	}
}