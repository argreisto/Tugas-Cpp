// Program C++ untuk implementasi Quick Sort
#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Fungsi partition
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Fungsi Quick Sort
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi mencetak array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Program utama
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan:\n";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "\nArray setelah diurutkan:\n";
    printArray(arr, n);

    return 0;
}
