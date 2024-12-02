#include<stdio.h>
int main(){
	int arr[] = {23,2,4,12,55,-1,3};
	int mang = sizeof(arr) / sizeof(int);
	printf("Mang Chua Sap Xep \n");
	for(int i = 0; i < mang; i++){
		printf("%4d",arr[i]);
	}
	for(int i =0; i<mang-1;i++){
		for(int j=0;j<mang - i -1;j++){
			if(arr[j] > arr[j +1]){
				int temp = arr[j];
				arr[j] = arr[j +1];
				arr[j +1] = temp;
			}
		}
	}
	printf("\n Mang Sau Khi Sap Xep\n");
	for(int i =0; i < mang;i++){
		printf("%4d",arr[i]);
	}
	return 0;
} 
