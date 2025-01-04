#include <iostream>
#include <vector>

using namespace std;

// Function to perform selection sort
void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

// Function to perform binary search
bool binarySearch(const vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    // Take a vector as user input
    cout << "Enter the size of the vector: ";
    int size;
    cin >> size;

    vector<int> inputVector(size);

    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < size; ++i) {
        cin >> inputVector[i];
    }

    // Apply selection sort
    selectionSort(inputVector);

    // Take a value from the user to search it inside the vector using binary search
    int searchValue;
    cout << "Enter the value to search: ";
    cin >> searchValue;

    bool isFound = binarySearch(inputVector, searchValue);

    if (isFound) {
        cout << "Value found in the vector.\n";
    } else {
        cout << "Value not found in the vector.\n";
    }

    return 0;
}
