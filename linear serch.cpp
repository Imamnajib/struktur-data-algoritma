#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target){
	for(int i = 0; i < size; i++){
		if(arr[i]==target){
			return i;
		}
	}
    return -1;	
} 

int main(){
	int arr[] = {1,2,3,4,5};
	int target = 6;
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int result = linear_search(arr,size,target);
	if(result !=-1) {
		cout<< "elemen " <<target<< " ditemukan pada indeks ke -" << result << endl;
	}else{
		cout << "elemen " <<target<< " tidak ditemukan pada indeks arrat" << endl;
	}
	return 0;
}
