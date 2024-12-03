#include <stdio.h>

int main() {
    int arr[8] = {2, 4, 5, 7, 8, 86, 5, 9};
    int temp;
    int valueItem;
    int flag = -1;
    int position[8];
    int count=0; 
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < 8; i++) {
        printf("Mang sau khi da duoc sap xep (%d): %d\n", i + 1, arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(int);
    printf("Moi ban nhap vao gia tri can tim o trong mang: ");
    scanf("%d", &valueItem);
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == valueItem) {
            flag = i;
            position[count] = i;
            count++;
        }
    }
    
    if (flag >= 0) {
        printf("Phan tu %d nam o vi tri: ", valueItem);
        for (int i = 0; i < count; i++) {
            printf("%d ", position[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong co trong mang.\n", valueItem);
    }

    return 0;
}

