#include<iostream>
using namespace std;

class vector{
	int *arr;
	int cs;
	int ms;

public: 
	vector(int max_size=1){
		cs = 0;
		ms = max_size;
		arr = new int [ms];
	}
	void push_back(int d){
		if(cs == ms){
			int *oldArr = arr;
			ms =  2*ms;
			arr = new int [ms];

			for(int i = 0; i<cs; i++){
				arr[i] = oldArr[i];
			}
			delete [] oldArr;
		}
		arr[cs] = d;
		cs++;
	}

	void pop_back(){
		if(cs >= 0){
			cs--;
		}
	}

	bool isEmpty(){
		return cs == 0;
	}

	int front(){
		return arr[0];
	}

	int back(){
		return arr[cs-1];
	}

	int at(int i){
		return arr[i];
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	int operator[](int i) {
		return arr[i];
	}
};

int main(){
	vector v(5);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	cout<<v.front()<<endl;
	cout<<v.back()<<endl;

	cout<<v.at(2)<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

	return 0;
}