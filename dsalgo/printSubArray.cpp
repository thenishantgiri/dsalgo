#include <bits/stdc++.h>

using namespace std;

void printSubArray(int arr [],int size){

	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			for(int k=i; k<=j; k++){
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}
	}
}

int main(){

	int arr [] = {10,20,30,40,50,60,70};
	int size = sizeof(arr)/sizeof(int);

	printSubArray(arr,size);

	return 0;
}