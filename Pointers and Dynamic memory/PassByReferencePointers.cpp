#include<iostream>
using namespace std;

//we can also use pointer variable to get pass by reference
void addViews(int *views){
	int add;
	cin>>add;
	cout<<"You added views: "<<add<<endl;

	//defrence operator will give us the bucket value
	*views = *views + add;

}

int main(){
	int views = 100;
	cout<<"current views: "<<views<<endl;

	//we will pass address of variable using &
	addViews(&views);
	cout<<"Updated views: "<<views<<endl;
	return 0;
}