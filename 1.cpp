#include<bits/stdc++.h>
using namespace std;

int liner_search(int *arr, int n, int key){
	for (int i = 0;i <=n; i++){
		if(arr[i] == key){
			return i;
		}
	}

	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	int index = liner_search(arr,n,key);

	if(index != -1){
		cout<<key<<" Is present at index "<<index<<endl;
	}
	else {
		cout<<key<<" Element not found!!";
	}

	return 0;
}