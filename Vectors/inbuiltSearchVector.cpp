#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	std::vector<int> v = {1,2,3,4,5};

	int key;
	cin>>key;

	vector<int>::iterator it = find(v.begin(),v.end(),key);

	if(it!=v.end()){
		cout<<"index: "<<it - v.begin();
	}
	else{
		cout<<"Element not found";
	}
}