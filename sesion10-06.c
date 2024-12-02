
#include<stdio.h>
int main(){
	int arr[100];
	int n,i,x,mid;
	int start=0;
	int end=sizeof(arr)/sizeof(int);
	printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
	printf("Cac phan tu trong mang: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t ", arr[i]);
    }
    for(i=1;i<5;i++){
    	int key=arr[i];
    	int j;
    	for(j=i-1;j>=0&&arr[j]>key;j--){
    	    arr[j+1]=arr[j];
			}
			arr[j+1]=key;
		}
	printf("\nCac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<n;i++){
		     printf("%d\t", arr[i]);
        } 
    printf("\n");
    printf("Vui long nhap 1 so bat ki de tim vi tri:");
    scanf("%d",&x);
    while(start<=end){
    	mid=(start+end)/2;
    	if(arr[mid]==x){
    		printf("Vi tri phan tu can tim o vi tri %d\n",mid);
    		return 0;
		}else if(arr[mid]>x){
			end=mid -1;
		}else{
			start=mid+1;
		}
	}
	printf("Ko tim thay phan tu\n");
	return 0;
}

