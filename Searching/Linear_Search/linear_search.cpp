// https://www.hackerearth.com/practice/algorithms/searching/linear-search/tutorial/

#include <iostream>
using namespace std;

// Function to perform Linear Search and print the number of iterations
int linearSearch(int arr[], int n, int key) {
    int iterations = 0;
    for (int i = 0; i < n; ++i) {
        iterations++;

        if (arr[i] == key) {
            cout << "Number of iterations: " << iterations << endl;
            return i; // Return index if key is found
        }
    }

    cout << "Number of iterations: " << iterations << endl;
    return -1; // Return -1 if key is not found in the array
}

int main() {
    int arr[] = {10, 25, 3, 17, 42, 8, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 17;

    cout << "Array before searching: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Call linearSearch function to search for the key and print the number of iterations
    int result = linearSearch(arr, n, key);

    if (result != -1) {
        cout << "\nKey found at index " << result << ".\n";
    } else {
        cout << "\nKey not found in the array.\n";
    }

    return 0;
}
