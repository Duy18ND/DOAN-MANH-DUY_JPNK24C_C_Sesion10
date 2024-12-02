#include <stdio.h>

int main() {
    int arr[] = {65, 2, 4, 7, 3, 12, 54};
    int index = -1;
    int mang = sizeof(arr) / sizeof(arr[0]);

    // In mang ban dau
    printf("Mang ban dau la: ");
    for (int i = 0; i < mang; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");

    // Sap xep thuat toan theo thu tu be den lon
    for (int i = 0; i < mang - 1; i++) {
        for (int j = 0; j < mang - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < mang; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");

    // Yeu cau nguoi dung nhap phan tu tim kiem
    int phantu;
    printf("Nhap phan tu tim kiem la: ");
    scanf("%d", &phantu);

    // Tim kiem nhi phan
    int left = 0, right = mang - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == phantu) {
            index = mid;
            break;
        }
        if (arr[mid] < phantu) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // In ket qua
    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi trí %d\n", phantu, index);
    } else {
        printf("Phan tu %d không ton tai trong mang\n", phantu);
    }

    return 0;
}

