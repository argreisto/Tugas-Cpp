// Program C++ linear search
#include <iostream>
#include <vector>
using namespace std;

void searchElement(vector<int> arr, int search_Element)
{
    int left = 0;
    int length = arr.size();
    int position = -1;
    int right = length - 1;

    // Jalankan putaran dari 0 ke kanan
    for (left = 0; left <= right;)
    {
        // Jika search_element ditemukan dari kiri
        if (arr[left] == search_Element)
        {
            position = left;
            cout << "Elemen ditemukan dalam Array di "
                 << position + 1 << " posisi dengan "
                 << left + 1 << " attempt";
            break;
        }

        // Jika search_element ditemukan dari kanan
        if (arr[right] == search_Element)
        {
            position = right;
            cout << "Elemen ditemukan dalam Array di "
                 << position + 1 << " posisi dengan "
                 << length - right << " attempt";
            break;
        }

        left++;
        right--;
    }

    // Jika elemen tidak ditemukan
    if (position == -1)
        cout << "Tidak ditemukan di Array dengan "
             << left << " attempt";
}

// Driver code
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int search_element = 5;

    // Function call
    searchElement(arr, search_element);

    return 0;
}
