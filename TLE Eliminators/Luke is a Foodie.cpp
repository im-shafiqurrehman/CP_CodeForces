#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> foodPile(n);
    
    for (int &it : foodPile) cin >> it;  // Input vector elements
    
    int l = foodPile[0] - x;
    int r = foodPile[0] + x;
    int changes = 0;

    for (int i = 1; i < n; i++) {  // Start from the second pile to count the changes
        int l1 = foodPile[i] - x;
        int r1 = foodPile[i] + x;

        // Check if the new range overlaps with the previous range
        if ((l1 >= l && l1 <= r) || (r1 >= l && r1 <= r) || (l >= l1 && l <= r1) || (r >= l1 && r <= r1)) {
            l = max(l, l1);
            r = min(r, r1);
        } else {
            changes++;
            l = l1;
            r = r1;
        }
    }
    
    cout << changes << endl;	
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    while (testcase--) {
        solve();
    }
    
    return 0;
}
