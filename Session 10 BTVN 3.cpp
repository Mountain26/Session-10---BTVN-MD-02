#include <stdio.h>
int main(){
	int n;
	int arr[9]={5,12,43,6,21,3,30,17};
	for(int i=0; i<10; i++){
		int key = arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	} 
	printf("Mang sau khi sap xep lai: ");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
