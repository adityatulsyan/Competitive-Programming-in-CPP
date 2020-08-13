#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	//Test Case
	//8 
	//0 1 2 0 2 1 1 0
	
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int pivot = 1; //Assumed, can be user input

	// Forward Pass
	int j = 0, temp; //temp to swap numbers
	for(int i = 0; i < n; i++){
		if(arr[i] < pivot){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			j++;
		}
	}

	//Backward Pass
	int k = n-1;
	for(int j = n-1; j>=0; j--){
		if(arr[j] > pivot){
			temp = arr[j];
			arr[j] = arr[k];
			arr[k] = temp;
			k--;
		}
	}

	for(auto i: arr)
		cout << i << " ";
	
	cout << endl;

	return 0;

}
