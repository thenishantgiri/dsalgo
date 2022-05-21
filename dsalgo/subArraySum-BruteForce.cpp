#include <bits/stdc++.h>

using namespace std;

int subArraySumBF(int arr[], int size){

	int sum=0;
	
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){

			int curr_sum=0;

			for(int k=i; k<=j; k++){
				curr_sum += arr[k];
			}

			sum = max(sum,curr_sum);
		}
	}

	return sum;
}

int main()
{

	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int size = sizeof(arr)/sizeof(int);

	cout <<"Largest Sum: " << subArraySumBF(arr,size) << endl;
	
	return 0;
}