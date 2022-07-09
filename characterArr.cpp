#include<iostream>
#include<cstring>
using namespace std;

int main(){
	// char arr[] = {'P','A','R','A','S','\0'};
	char arr[] = "PARAS";
	cout<<arr<<endl;

	cout<<strlen(arr)<<endl; //gives number of visible character
	cout<<sizeof(arr)<<endl; //gives number of visible character including null symbol.

	char arr2[100];
	cin>>arr2;
	cout<<arr2;

	return 0;
}