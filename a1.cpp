#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
	int le = 0;
	for(auto i : arr){
		le = max(le,arr[i]);
	}
	return le;
}

// int largestElement(vector<int> arr) {
//  int largestEle = INT_MIN;
//  int n = arr.size();
     
//      for (int i=0;i<n; i++) {
//      	if(arr[i] > largestEle){
//      		largestEle = arr[i];
//      	}
//      }
     
//      return largestEle;
// }

int main(){
	vector<int> arr = {1,2,3,4,8,6};

	cout<<largestElement(arr);
}