#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    int n = v.size();

    for(int times = 1; times <= n-1; times++){
        int flag = 0;

        for(int j = 0; j <= n - times -1; j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
                flag = 1;
            }
        }

       if(flag == 0){
        break;
        } 
    }
    return (v);
}
int main(){
    std::vector<int> v = {1,5,7,9};

    std::vector<int> a = optimizedBubbleSort(v);

    for(int x : a){
        cout<<x<<" ";
    }

    return 0;
}