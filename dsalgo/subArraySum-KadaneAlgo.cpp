#include <bits/stdc++.h>

using namespace std;


int subArraySumKA(int arr[], int size){

	int sum=0;
	int curr_sum=0;
	
	for(int i=0; i<size; i++){
		curr_sum = curr_sum + arr[i];
		if(curr_sum<0) {
			curr_sum = 0;
		}

		sum = max(sum,curr_sum);
	}

	return sum;
}

int main()
{

	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int size = sizeof(arr)/sizeof(int);

	cout <<"Largest Sum: " << subArraySumKA(arr,size) << endl;
	
	return 0;
}