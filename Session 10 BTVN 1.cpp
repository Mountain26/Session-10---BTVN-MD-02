#include <stdio.h>
int main(){
	int n;
	int arr[5]={1,2,2,4,5};
	
	printf("Moi ban nhap phan tu ban muon tim trong mang: ");
	scanf("%d", &n);
	
	int flag = -1;
	
	for(int i=0; i<5; i++){
		if(arr[i]==n){
			printf("Phan tu %d co o trong mang nhe va nam o vi tri %d\n", n, i+1);
			flag = 1;
		}
	}
	if(flag==-1){
		printf("Phan tu %d khong co trong mang", n); 
	} 
} 
