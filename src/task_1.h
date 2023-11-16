#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bubbleSort(vector<string>& titles) {
    int n = titles.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (titles[j] > titles[j + 1]) {
                swap(titles[j], titles[j + 1]);
            }
        }
    }
}
int main() {
    vector<string> bookTitles {"Catcher in the Rye", "Pride and Prejudice", "To Kill a Mockingbird",
                                         "The Great Gatsby", "Moby Dick"};
    bubbleSort(bookTitles);
    for (const auto& title :bookTitles) {
        cout << title << endl;
    }
    return 0;
}
