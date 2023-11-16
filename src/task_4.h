#include <iostream>
#include <vector>

using namespace std;
int countElementsWithSmallerNeighbors(const vector<int>& arr) {
    int count = 0;
    int n = arr.size();
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }
    if (arr[0]>arr[1]) {count++;}
    return count;
}
int main() {
    vector<int> arr {5, 2, 8, 1, 4, 6};
    int count = countElementsWithSmallerNeighbors(arr);
    cout << count << endl;

    return 0;
}
