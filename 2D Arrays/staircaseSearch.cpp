#include<bits/stdc++.h>
using namespace std;

//staircaseSearch to find position of an element in 2D array
pair<int,int> staircaseSearch(int arr[][4], int n,int m, int key){

	//initialize ith column to be 0 and jth row to be m-1(40 here);
	int i = 0;
	int j = m-1;

	//return -1,-1 if key is bigger then first and last element; 
	if(key < arr[0][0] or key > arr[n-1][m-1]){
		return {-1,-1};
	}

	//loop should not cross the matrix boundry ith row should iterate till n-1 and j should not be negative
	while(i <= n-1 and j >= 0){

		if(arr[i][j] == key){
			return {i,j};
		}
		//if bigger then move to next backward position j-- ((m-1)-1)
		else if(arr[i][j] > key){
			j--;
		}
		//if not bigger then move down in column
		else {
			i++;
		}
	}

	return {-1,-1};

}

int main(){
	int arr[4][4] = {{10,20,30,40},
					 {15,25,35,45},
					 {27,29,37,48},
					 {32,33,39,50}};

	int n = 4, m = 4, key = 50;

	pair<int,int> coordinate = staircaseSearch(arr,n,m,key);

	cout<<coordinate.first<<" "<<coordinate.second;
	return 0;
}