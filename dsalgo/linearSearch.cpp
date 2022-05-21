#include <bits/stdc++.h>

using namespace std;

int linear_search(int arr[],int size,int key){
	for(int i=0; i<size; i++){
		//check if current element matches with the key
		if (arr[i] == key)
		{
			return i;
		}
	}
	//out of the loop
	return -1;
}

int main()
{

	int arr [] = {1,2,0,10,11,9,8,8,7};
	int n = sizeof(arr)/sizeof(int);
	int key;
	cin >> key;

	int index = linear_search(arr,n,key);
	if( index != -1 ){
		cout << key << " is present on index " << index << endl;
	}else{
		cout << key << " is not present!" << endl;
	}
	
	return 0;
}