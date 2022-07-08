#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A){
	int cs = 0;
	int ms = 0;

	if(A.size() > 0){
	for(int i = 0; i < A.size(); i++){
		cs = cs + A[i];
		ms = max(ms,cs);

		if(cs < 0){

			cs = 0;
		}
	}
}
	return ms;

}



int main(){
	std::vector<int> A = {};

	cout<<maxSumSubarray(A);	

	return 0;
}