#include<iostream>
#include<vector>
using namespace std;

int main()
{
	std::vector<vector <int>> v = {{1,2,3},{4,5,6},{7,8,9}};

	for(int i=0;i<v.size();i++){
		for(int x : v[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}