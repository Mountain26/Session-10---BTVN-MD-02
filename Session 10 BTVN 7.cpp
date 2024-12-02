#include <stdio.h>
int main(){
	int temp;
	int n,k;
	int count = 0; 
	
	printf("Moi ban nhap so hang cua mang: ");
    scanf("%d", &n);
    printf("Moi ban nhap so cot cua mang: ");
    scanf("%d", &k);
    

    int arr[n][k];
    for (int i = 0; i < n; i++) {
        	for (int j = 0; j < k; j++){
            printf("arr[%d][%d] la: ", i, j);
            scanf("%d", &arr[i][j]); 
        }
    }
    for(int i = 0;i < n; i++){
		for(int j = 0; j < k - 1; j++){
			for(int l = j + 1; l < k; l++){
				if(arr[i][j] > arr[i][l]){ 
					temp = arr[i][j];
					arr[i][j] = arr[i][l];
					arr[i][l] = temp; 
			}
		}
	}
}
	for (int i = 0; i < n; i++) {
        		for (int j = 0; j < k; j++){
            	printf("%d ", arr[i][j]);
        }
        	printf("\n");
    }
}
