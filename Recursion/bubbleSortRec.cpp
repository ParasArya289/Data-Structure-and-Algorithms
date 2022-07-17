#include<bits/stdc++.h>
using namespace std;

void bubleSortRec(int arr[],int n){
	if(n == 1){
		return; 
	}

	for(int j = 0; j < n-1; j++){
		if(arr[j] > arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	bubleSortRec(arr,n-1);
}

void bubleSortRecRec(int arr[], int n, int j){
	if(n == 1 || n == 0){
		return;
	}
	if(j == n-1){
		bubleSortRecRec(arr,n-1,0);
		return;
	}
	if(arr[j] > arr[j+1]){
		swap(arr[j],arr[j+1]);
	}
	bubleSortRecRec(arr,n,j+1);
}

int main(){
	int arr[] = {1,22,3,4,5,8,6};

	int n  = sizeof(arr)/sizeof(int);

	// bubleSortRec(arr,n);
	bubleSortRecRec(arr, n, 0);

	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}