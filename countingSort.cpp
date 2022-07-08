#include<bits/stdc++.h>
using namespace std;


vector<int> countingSort(vector<int> v){
	int n = v.size();
	int largest = -1;

	//loop to find largest element in array
	for(int i=0;i<n;i++){
		largest = max(largest,v[i]);
	}

	//create dynamic array/vector as we dont know the size of the array.
	//Create the vector of lize largest+1 and initialize it with 0.
	std::vector<int> freq(largest+1,0);

	// loop to create freq map, increment by 1 on every present value in original array.
	//Value those are not present in range will remain 0.
	for(int x : v){
		freq[x]++;
	}

	//loop to replace freq map to original value and how many times they repeat.
	// decrement current freq value and increment j
	int j=0;
	for(int i=0; i<largest;i++){
		while(freq[i] > 0){
			v[j] = i;
			freq[i]--;
			j++;
		}
	}
	return (v);
}

int main(){
	std::vector<int> v = {1,2,7,8,3,2,3};

	for(int x : countingSort(v)){
		cout<<x<<" ";
	}
}