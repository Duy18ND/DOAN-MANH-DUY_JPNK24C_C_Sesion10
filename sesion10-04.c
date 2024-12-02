#include<stdio.h>
int main(){
	int i;
	int arr[] = {23,2,4,12,55,-1,3};
	int mang = sizeof(arr) / sizeof(arr[0]);
	printf("Mang Chua Sap Xep \n");
	for(int i = 0;i<mang;i++){
		printf("%4d",arr[i]);
	}
	for( i = 0; i < mang -1; i++){
	int min_index = i;
	for(int j = i +1; j <mang; j++){
		if(arr[j] < arr[min_index]){
			min_index = j;
		}
	}
	int temp = arr[min_index];
	arr[min_index] = arr[i];
	arr[i] = temp;
	}
	
	printf("\n Mang Sau Khi Sap Xep\n");
	for(int i =0; i < mang;i++){
		printf("%4d",arr[i]);
	}
	return 0;
} 
