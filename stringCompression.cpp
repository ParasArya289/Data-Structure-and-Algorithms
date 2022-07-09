#include<bits/stdc++.h>
#include<string>
using namespace std;

string strinCompression(string str){

	int n = str.length();
	string output;
	for(int i = 0;i<n;i++){
		int count = 1;
		while(i<n-1 and str[i] == str[i+1]){
			count++;
			i++;
		}

		output += str[i];
		output += to_string(count);
	}
	if(output.length() > str.length()){
		return str;
	}
	else{
		return output;
	}

}
int main(){
	string str = "aaabbccdd";
	cout<<strinCompression(str);
	return 0;
}