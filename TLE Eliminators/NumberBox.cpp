#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;  // n = rows, m = columns
    cin >> n >> m;
    
    int sum = 0;
    bool isZero = false;
    int neg_cnt = 0;
    int mini = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            
            sum += abs(a);
            mini = min(abs(a), mini);
            if (a == 0) isZero = true;
            if (a < 0) neg_cnt++;
        }
    }
    
    if (neg_cnt % 2 == 0 || isZero) {
        cout << sum << endl;
    } else {
        cout << sum - 2 * mini << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
