#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = arr[i];
        int pos = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                pos = j;
            }
        }

        swap(arr[i], arr[pos]);
    }
}

int main() {
    int a[] = {29, 72, 98, 13, 87, 66, 52, 51, 36};
    int n = sizeof(a) / sizeof(a[0]);

    Selection_sort(a, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }

    return 0;
}
