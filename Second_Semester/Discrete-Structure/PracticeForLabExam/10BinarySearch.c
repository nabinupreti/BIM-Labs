//10.	WAP to implement recursive algorithm for binary search.
#include <stdio.h>
int BinarySearch(int arr[],int low, int high,int key){
	if(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid] == key){
			return mid;
		}
		else if(key<arr[mid]){
			return BinarySearch(arr,low,mid-1,key);
		}
		else{
			return BinarySearch(arr,mid+1,high,key);
		}
	}
	else{
		return -1;
	}
}
void main(){
	int arr[] = {1,2,5,9,15,17,29,50,89,100};//Array should be in ascending order
	int size,res,key,low=0,high;
	size = sizeof(arr)/sizeof(arr[0]);
	high = size-1;
	printf("Enter key to search: ");
	scanf("%d",&key);
	res = BinarySearch(arr,low,high,key);
	if(res==-1){
		printf("%d not found in array.",key);
	}
	else{
		printf("%d found at index %d of array.",key,res);
	}
}
