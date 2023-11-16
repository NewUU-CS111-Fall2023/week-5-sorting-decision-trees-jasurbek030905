#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void selectionSort(vector<int> &denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }
        swap(denominations[i], denominations[minIndex]);
    }
}

int main() {
    vector<int> denominations{8, 3, 12, 6, 1};
    selectionSort(denominations);
    for (const auto &denomination: denominations) {
        cout << denomination << endl;
    }
    return 0;
}
