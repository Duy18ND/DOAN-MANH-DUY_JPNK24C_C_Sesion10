#include<stdio.h>
int main(){
	int arr[] = {1,3,4,6,8,10};
	int mang = sizeof(arr) / sizeof(int);
	int phantu;
	int i;
	printf("Nhap vao phan tu muon tim la: ");
	scanf("%d",&phantu);
	for( i = 0; i < mang; i++){
		if(arr[i] == phantu){
			printf("Phan tu %d ton tai vi tri thu %d \n",phantu,i);
			break;
	}
	}
		if(arr[i] !=phantu){
		printf("Phan tu do khong ton tai!!!");
	}
	return 0;
} 
