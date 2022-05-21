#include <bits/stdc++.h>

using namespace std;


void reverseArray(int arr[], int size){
	int start = 0;
	int end = size-1;

	while(start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = arr[temp];

		start++;
		end--;
	}
}

void printArray(int arr[],int size) {
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{

	int arr[] = {1,2,3,4,5,6,7,9};
	int size = sizeof(arr)/sizeof(int);

	cout<<"pre swap"<<endl;
	printArray(arr,size);

	reverseArray(arr,size);

	cout<<"post swap"<<endl;
	printArray(arr,size);
	
	return 0;
}