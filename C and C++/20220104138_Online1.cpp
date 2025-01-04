#include <iostream>
#include <vector>

using namespace std;

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

bool binarySearch(const vector<int> &arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}

int main() {

    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    vector<int> myVector(size);

    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < size; ++i) {
        cin >> myVector[i];
    }

    selectionSort(myVector);

    cout << "Vector after sorting using selection sort: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;


    int target;
    cout << "Enter a value to search in the vector: ";
    cin >> target;


    if (binarySearch(myVector, target)) {
        cout << target << " found in the vector." << endl;
    } else {
        cout << target << " not found in the vector." << endl;
    }

    return 0;
}