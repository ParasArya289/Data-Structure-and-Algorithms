#include<bits/stdc++.h>
using namespace std;

int main(){
	char route[100];

	cin.getline(route,100);

	int x=0;
	int y=0;

	for(int i = 0;route[i]!='\0';i++){
		switch (route[i]){
			case 'N': y++;
					break;
			case 'S':y--;
					break;
			case 'W':x--;
					break;
			case 'E':x++;
					break;
		}
	}
	cout<<"Final X and Y is: "<<x<<","<<y<<endl;

	//quadrant 1
	if(x >= 0 and y>=0){
		while(y--){
			cout<<"N";
		}
		while(x--){
			cout<<"E";
		}
	}

	//quadrant 2
	else if(x < 0 and y >= 0){
		while(y--){
			cout<<"N";
		}
		while(x++){
			cout<<"W";
		}
	}
	//quadrant 3
	else if(x < 0 and y < 0){
		while(y++){
			cout<<"S";
		}
		while(x++){
			cout<<"W";
		}
	}
	else if(x >= 0 and y < 0){
		while(y++){
			cout<<"S";
		}
		while(x--){
			cout<<"E";
		}
	}
}