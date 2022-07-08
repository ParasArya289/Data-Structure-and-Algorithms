#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int val){
	int n = A.size();
	int s = 0, e = n-1, answer = -1;

	while(s <= e){
		int mid = (s+e)/2;

		if(A[mid] > val){
			e = mid-1;
		}
		else {
			answer = A[mid];
			s = mid+1;
		}
	}
	return answer;
}

int main(){
	std::vector<int> A ={1,2,3,4,5};

	int val;
	cin>>val;

	cout<<lowerBound(A,val);

	return 0;
}