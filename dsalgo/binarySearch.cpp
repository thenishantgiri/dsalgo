#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int size,int key){
	int start = 0;
	int end = size-1;

	while (end >= start){
		int mid = (start + end) / 2;

		if(arr[mid] == key){
			return mid;
		}else if (key > arr[mid]){
			start = mid+1;
		}else{
			end = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int arr [] = {2,4,5,6,9,12,21,78,111};
	// int arr[] = {111,78,21,12,9,6,5,4,2};
	int size = sizeof(arr)/sizeof(int);

	int key;
	cin >> key;

	int index = binary_search(arr,size,key);
	if(index != -1){
		cout << key << " is present at index " << index << endl;
	}else{
		cout << key << " is not present!" << endl;
	}

}