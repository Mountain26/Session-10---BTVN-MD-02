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
    for(int i = 0;i < n-1; i++){
			for(int l = i + 1; l < n; l++){
				if(arr[i][i] > arr[l][l]){ 
					temp = arr[i][i];
					arr[i][i] = arr[l][l];
					arr[l][l] = temp; 
			}
		}
	}
	for (int i = 0; i < n; i++){ 
		printf("%d ", arr[i][i]);
}
		printf("\n");
		return 0;\
	}
