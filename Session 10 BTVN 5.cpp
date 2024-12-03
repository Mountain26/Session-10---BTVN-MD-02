#include <stdio.h>

int main(){
	int arr[8]={2,4,5,7,8,86,5,9};
	int start = 0;
	int end = 7;
	int mid;
	int item;
	int temp;
	 
	printf("Moi ban nhap gia tri can tim kiem: ");
	scanf("%d", &item);
	
	for(int i=0;i<8;i++){
		for(int j=0;j<8-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			} 
		} 
	}
	
	for(int i=0; i<8;i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	
	while(start<=end){
		mid = (start+end)/2; 
		if(arr[mid]==item){
			printf("Phan tu %d co o trong mang va o vi tri %d",item, mid);
			return 1; 
		}else if(arr[mid]>item){
			end = mid - 1; 
		}else{
			start = mid + 1; 
		}
	}
	printf("Phan tu %d khong ton tai trong mang", item); 
}
