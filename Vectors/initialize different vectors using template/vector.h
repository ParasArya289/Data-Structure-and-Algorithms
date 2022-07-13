
template<typename T>
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
	void push_back(T d){
		if(cs == ms){
			T *oldArr = arr;
			ms =  2*ms;
			arr = new T[ms];

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

	T front(){
		return arr[0];
	}

	T back(){
		return arr[cs-1];
	}

	T at(int i){
		return arr[i];
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	T operator[](int i) {
		return arr[i];
	}
};
