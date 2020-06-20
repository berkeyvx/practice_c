#include <iostream>

bool divideArray(int *arr,int n);
int calculateHalfSumArray(int *arr,int n);

// arrays must be sorted
// sum of array / 2 must be even

int main(int argc, char const *argv[])
{
	int array[] = {2,3,5,8,8,10}; // true
	int array2[] = {2,3,4,5,6,7,12};
	int array3[] = {1,2,3,4,5,5};
	int sum = calculateHalfSumArray(array,6); // sum/2 if sum of array divisible by 2 else -1
	int sum2 = calculateHalfSumArray(array2,7); // sum/2 if sum of array divisible by 2 else -1
	int sum3 = calculateHalfSumArray(array3,6);
	std::cout << divideArray(array,sum) << "\n";
	std::cout << divideArray(array2,sum2) << "\n";
	std::cout << divideArray(array3,sum3) << "\n";
	return 0;
}

bool divideArray(int *arr,int sum){
	int loSum = 0;
	int index = 0;
	if(sum != -1){
		while(loSum <= sum){
			loSum += arr[index];
			index++;
			if(loSum == sum){
				return 1;
			}
		}
		return 0;
	}
	else
		return 0;
}

int calculateHalfSumArray(int *arr,int n){
	int sum = 0;
	for(int i = 0; i < n ; ++i){
		sum += arr[i];
	}
	if(sum % 2 == 0){
		return sum/2;
	}else
		return -1;
}
