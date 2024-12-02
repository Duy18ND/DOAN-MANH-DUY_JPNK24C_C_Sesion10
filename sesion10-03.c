#include<stdio.h>
int main(){
	int arr[] = {23,2,4,12,55,-1,3};
	int mang = sizeof(arr) / sizeof(int);
	printf("Mang Chua Sap Xep \n");
	for(int i = 0;i<mang;i++){
		printf("%4d",arr[i]);
	}
	for(int i = 1; i < mang; i++){
	int key = arr[i];
	int j = i - 1;
	while(j >=0 && arr[j] > key){
		arr[j +1] = arr[j];
		j = j -1;
	}
	arr[j+1] =key;
	}
	
	printf("\n Mang Sau Khi Sap Xep\n");
	for(int i =0; i < mang;i++){
		printf("%4d",arr[i]);
	}
	return 0;
} 
