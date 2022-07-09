#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
	string strPalindrome = str;
	reverse(strPalindrome.begin(),strPalindrome.end());
	if(strPalindrome == str){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string str = "abcdcba";

	cout<<isPalindrome(str);

}