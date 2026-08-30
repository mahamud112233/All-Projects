#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pos(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[i] = x;
    }

    int rounds = 0;
    for (int i = 0; i < n-1; i++) {
        if (pos[i] > pos[i + 1]) rounds++;
    }
    cout << rounds << "\n";
}