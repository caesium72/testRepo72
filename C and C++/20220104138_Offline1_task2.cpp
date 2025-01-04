#include <iostream>
#include <vector>

using namespace std;


void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

bool binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;


        if (arr[mid] == target)
            return true;

        else if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return false;
}

int main() {

    cout << "Enter the size of the vector: ";
    int size;
    cin >> size;

    vector<int> myVector;
    cout << "Enter the elements of the vector:\n";
    for (int i = 0; i < size; ++i) {
        int element;
        cin >> element;
        myVector.push_back(element);
    }

    insertionSort(myVector);


    cout << "Sorted vector: ";
    for (int i : myVector) {
        cout << i << " ";
    }
    cout << endl;

    int searchValue;
    cout << "Enter a value to search: ";
    cin >> searchValue;
    if (binarySearch(myVector, searchValue)) {
        cout << searchValue << " found in the vector.\n";
    } else {
        cout << searchValue << " not found in the vector.\n";
    }

    return 0;
}