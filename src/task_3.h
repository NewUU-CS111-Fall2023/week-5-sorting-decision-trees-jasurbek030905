#include <iostream>
#include <vector>

using namespace std;

// Method to rearrange the soldiers
void rearrangeSoldiers(vector<string> &soldiers) {
    int n = soldiers.size();

    for (int i = 0; i < n - 1; i += 2) {
        swap(soldiers[i], soldiers[i + 1]);
    }
}

int main() {
    vector<string> soldiers{"Alpha", "Bravo", "Charlie", "Delta", "Echo"};
    rearrangeSoldiers(soldiers);
    for (const auto &soldier: soldiers) {
        cout << soldier << endl;
    }

    return 0;
}
