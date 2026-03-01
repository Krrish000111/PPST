#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter number to search: ";
    cin >> key;

    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            result = mid;
            break;
        } else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (result != -1)
        cout << "Found at position " << result + 1 << endl;
    else
        cout << "Number not found!" << endl;

    return 0;
}