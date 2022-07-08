#include<bits/stdc++.h>
using namespace std;

void bubleSort(vector<int> a){
	int n = a.size();
	for(int times = 1; times <= n-1; times++){
		for(int j = 0; j<= n - times - 1; j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(auto x : a){
		cout<<x<<" ";
	}

}

int main(){
	std::vector<int> a = {22,4,78,2,3,6,7,9};
	bubleSort(a);
	return 0;
}