#include<bits/stdc++.h>
using namespace std;

int pkstring(int k, string s){
	int p = 0;
	for(int i = 0;i<s.length();i++){
		if(s[i] == 'p'){
			p++;
		}
	}
	if(k == p){
		return 1;
	}
	return 0;
}

int main(){
	int k = 2;
	string s = "abhs";
	cout<<pkstring(k,s);
	return 0;
}