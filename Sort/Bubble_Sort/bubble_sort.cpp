// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/visualize/

#include <iostream>
using namespace std;

// Hàm để thực hiện thuật toán Bubble Sort và in ra mảng sau mỗi lượt duyệt
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        // Lặp qua từng phần tử và so sánh để đổi chỗ nếu cần
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi giá trị của hai phần tử
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // In ra mảng sau mỗi lượt duyệt
        cout << "Mang sau luot duyet thu " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;

        // Nếu không có phép hoán đổi nào trong lượt duyệt này, mảng đã được sắp xếp
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mang truoc khi sap xep: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Gọi hàm bubbleSort để sắp xếp mảng và in ra sau mỗi lượt duyệt
    bubbleSort(arr, n);

    cout << "\nMang sau khi sap xep: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
