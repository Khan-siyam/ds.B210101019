
#include <algorithm>
#include <iostream>
using namespace std;

void deleteElement(int arr[], int& size, int element)
{
    int indexToDelete = -1;

    int* ptr = find(arr, arr + size, element);
    indexToDelete = ptr - arr;
    if (indexToDelete > size - 1) {
        cout << "Element not found in the array." << endl;
        return;
    }

    for (int i = indexToDelete; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size;
}

int main()
{
    int arr[] = { 20, 5, 1, 10, 15 };

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before deletion:";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target = 1;

    deleteElement(arr, size, target);

    cout << "Array after deletion:";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
