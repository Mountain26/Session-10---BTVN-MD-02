#include <stdio.h>

int main() {
    int temp;
    int n, k;
    
    printf("Moi ban nhap so hang cua mang: ");
    scanf("%d", &n);
    printf("Moi ban nhap so cot cua mang: ");
    scanf("%d", &k);
    
    int arr[n][k];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("arr[%d][%d] la: ", i, j);
            scanf("%d", &arr[i][j]); 
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][k - i - 1] < arr[j][k - j - 1]) {
                temp = arr[i][k - i - 1];
                arr[i][k - i - 1] = arr[j][k - j - 1];
                arr[j][k - j - 1] = temp;
            }
        }
    }

    printf("Cac phan tu tren duong cheo phu sau khi sap xep la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][k - i - 1]);
    }
    printf("\n");

    return 0;
}

