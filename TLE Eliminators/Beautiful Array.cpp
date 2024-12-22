#include<bits/stdc++.h>
using namespace std;
#define int long long

void Solve() {
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    
    // Corrected condition
    if (s < (b * k) || s > (b * k + (k - 1) * n)) {
        cout << -1 << "\n";
        return;
    }

    vector<int> a(n, 0); 

    a[0] = k * b;  // Assign the minimum value required
    s -= k * b;

    // Distribute the remaining `s`
    for (int i = 0; i < n && s > 0; i++) {
        int x = min(k - 1, s);
        a[i] += x;
        s -= x;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }

    return 0;
}
