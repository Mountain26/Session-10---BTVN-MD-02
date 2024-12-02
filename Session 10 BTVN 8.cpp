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
    for(int j = 0;j < k; j++){
		for(int i = 0; i < n - 1; i++){
			for(int l = i + 1; l < n; l++){
				if(arr[i][j] > arr[l][j]){ 
					temp = arr[i][j];
					arr[i][j] = arr[l][j];
					arr[l][j] = temp; 
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

