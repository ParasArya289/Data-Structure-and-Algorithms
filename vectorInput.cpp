#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	string temp;
	std::vector<string> str;
	int n = 5;

	while(n--){
		getline(cin,temp);
		str.push_back(temp);

	}

	for(string x : str){
		cout<<x<<" ";
	}
}