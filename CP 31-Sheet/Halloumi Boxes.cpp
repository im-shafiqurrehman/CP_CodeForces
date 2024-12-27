#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool can_sort_halloumi(const vector<int>& a, int k) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < min(i + k, n); ++j) {
            if (a[i] > a[j]) { 
                return false; // Inversion found, cannot be sorted
            }
        }
    }
    return true; // No inversions found, can be sorted
}

void Solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (can_sort_halloumi(a, k)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}