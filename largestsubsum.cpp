#include<iostream>
using namespace std;

//bruteforce O(n^3)
// int largestsum(int *arr, int n){



// 	int largest_sum = 0;

// 	for(int i = 0; i < n; i++){
// 		for(int j = i; j < n; j++){

// 			int currentSum = 0;

// 		for(int k = i; k <= j; k++){
// 			currentSum += arr[k];
// 		}
// 		largest_sum = max(largest_sum,currentSum);
// 		}

// 	}

// 	return largest_sum;

// }


//Prefix sum approach O(N^2)
int largestsum(int *arr, int n){

	int prefix[n] = {0};
	for(int i = 1; i < n; i++){
		prefix[i] = prefix[i-1] + arr[i];
	}

	int largest_sum = 0;

	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){

			int currentSum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j];
			largest_sum = max(largest_sum,currentSum);
		}
		
	}

		return largest_sum;
}

	

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);

	cout<<"Largest sum: "<<largestsum(arr,n);


}