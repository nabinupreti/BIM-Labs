#include <stdio.h>
void conquer(int arr[],int si, int mid, int ei){
	int merged[ei-si+1];
	printf("conquer");
	int idx1 = si;
	int idx2 = mid+1;
	int i=0,j;
	while(idx1 <= mid && idx2 <= ei){
		if(arr[idx1] <= arr[idx2]){
			merged[i] = arr[idx1];
			i++; idx1++;
		}
		else{
			merged[i] = arr[idx2];
			i++; idx1++;
		}
	}
	while(idx1<=mid){
		merged[i] = arr[idx1];
		i++;idx1++;
	}
	while(idx2<=ei){
		merged[i] = arr[idx2];
		i++;idx2++;
	}
	for(i=0;j=si,i<=sizeof(merged)/sizeof(merged[0])++;j++){
		arr[i] = merged[i];
	}
}
void divide(int arr[],int si,int ei){
	if(si>=ei){
		return;
	}
	int mid;
	mid = ei+(ei-si)/2;
	divide(arr,si,mid);
	divide(arr,mid+1,ei);
	conquer(arr,si,mid,ei);	
}
void main(){
	int arr[]={5,1,7,50,9,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	divide(arr,0,len-1);
	int i;
	printf("Sorted array is:");
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
} 
