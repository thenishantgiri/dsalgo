#include <bits/stdc++.h>

using namespace std;

// prefix sum array
int subArraySumPreSum(int arr[], int size){

	int prefix[100] = {0};
	prefix[0] = arr[0];

	for(int i=1; i<size; i++){
		prefix[i] = prefix[i-1] + arr[i];
	}

	int sum=0;
	
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){

			int curr_sum= i>0 ? prefix[j] - prefix [i-1] : prefix[j];

			sum = max(sum,curr_sum);
		}
	}

	return sum;
}

int main()
{

	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int size = sizeof(arr)/sizeof(int);

	cout <<"Largest Sum: " << subArraySumPreSum(arr,size) << endl;
	
	return 0;
}	