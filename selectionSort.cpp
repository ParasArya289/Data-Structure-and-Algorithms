#include<bits/stdc++.h>
using namespace std;


//function to implement selection sort, takes vector v as argument
vector<int> selection_sort(vector<int> v){
	int n = v.size();

	//loop which will run till n-2 index, as n-1th index will swapped by n-2th
	for(int pos = 0; pos <= n-2; pos++){

		// int current = v[pos];
		int min_position = pos;

		//loop to find minimum number to be swaped with current number
		for(int j = pos; j < n; j++){

			//check whether number at min_position is less then current j element,if yes then update min to j
			if(v[j] < v[min_position]){
				min_position = j;
			}
		}
		//swap 
		swap(v[min_position],v[pos]);
	}
	return (v);
}

int main(){
	std::vector<int> v = {2,4,1,6,5,8,3};

	for(int x : selection_sort(v)){
		cout<<x<<" ";
	}
}