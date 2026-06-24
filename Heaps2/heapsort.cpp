#include <iostream>
#include <vector>
using namespace std;

class Heap {
public:
    void heapify(vector<int>& arr, int n, int i) {
        while (true) {
            int l = 2 * i + 1;
            int r = 2 * i + 2;
            int maxI = i;

            if (l < n && arr[l] > arr[maxI])
                maxI = l;

            if (r < n && arr[r] > arr[maxI])
                maxI = r;

            if (maxI == i)
                break;

            swap(arr[i], arr[maxI]);
            i = maxI;
        }
    }

    void heapsort(vector<int>& arr) {
        int n = arr.size();

        // Build max heap
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }

        // Extract elements
        for (int i = n - 1; i > 0; i--) {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
};

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    Heap h;
    h.heapsort(arr);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}