#include<iostream>
using namespace std;

int lastOccurence(int arr[],int n,int key){

	//base case
	if(n == 0){
		return -1;
	}
	//rec case
	int subIndex = lastOccurence(arr + 1,n - 1,key);
	if(subIndex == -1){
		if(arr[0] == key){
			return 0;
		}
		else{
			return -1;
		}
	}
	else{
		return subIndex + 1;
	}
}

int main(){
	int arr[] = {1,2,3,4,5,4,4,4,6};
	int n = sizeof(arr)/sizeof(int);
	int key = 4;

	cout<<lastOccurence(arr,n,key);
}