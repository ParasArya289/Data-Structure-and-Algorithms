#include<iostream>
using namespace std;

int main(){
	char sentence[100];

	char temp = cin.get();

	// int len = 1;
	// while(temp!='#'){
	// 	len++;
	// 	cout<<temp;
	// 	temp = cin.get();
	// }

	int len=0;
	while(temp!='#'){
		sentence[len++] = temp;
		temp = cin.get();
	}
	sentence[len] = '\0';
	cout<<"Length: "<<len<<endl;
	cout<<sentence<<endl;
}