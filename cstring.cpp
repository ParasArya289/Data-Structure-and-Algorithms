#include<iostream>
#include<cstring>
using namespace std;

int main(){

	char a[100] = "apple";
	char b[100];

	//cal length
	cout<<strlen(a)<<endl;

	//string copy
	strcpy(b,a);
	cout<<b<<endl;

	//string compare
	cout<<strcmp(a,b)<<endl;

	//string concate
	char name[] = "paras";
	char sirname[] = "arya";\

	cout<<strcat(name,sirname);


}