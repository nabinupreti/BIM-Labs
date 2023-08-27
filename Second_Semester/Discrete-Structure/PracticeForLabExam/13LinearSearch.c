//13.	Write a program to implement recursive linear search algorithm.
#include<stdio.h>
int LinearSearch(int arr[],int size,int key){
	if(size>=0){
		if(arr[size]==key){
		return size;
		}
		else{
			return LinearSearch(arr,size-1,key);
		}
	}
	else{
		return -1;
	}
}
void main(){
	int arr[]={50,0,2,30,56,89,11,20,3,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Enter a key to search: ");
	int key;
	scanf("%d",&key);
	int res = LinearSearch(arr,size-1,key);
	if(res==-1){
		printf("%d not found in array.",key);
	}
	else{
		printf("%d found at index %d of array.",key,res);
	}
}
