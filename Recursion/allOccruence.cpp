#include<bits/stdc++.h>
using namespace std;

std::vector<int> store;

void helper(vector<int> v,int key,int i){
	if(i == v.size()){
		return;
	}
	if(v[i] == key){
		store.push_back(i);
	}
	helper(v,key,i+1);
	return;
}

vector<int> allOccurence(vector<int> v,int key){
	store.clear();
	helper(v,key,0);
	return (store);
}

int main(){
	std::vector<int> v = {1,2,3,4,4,4,4,4};
	int key = 4;

	cout<<allOccurence(v,key).size();

}