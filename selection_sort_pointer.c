#include <stdio.h>

void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int *max = arr + i;

        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) > *max) {
                max = arr + j;
            }
        }

        int temp = *(arr + i);
        *(arr + i) = *max;
        *max = temp;
    }
}

int main() {
    int arr[5] = {3, 8, 1, 5, 2};

    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
