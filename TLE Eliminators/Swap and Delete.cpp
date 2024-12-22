#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    int cnt1 = 0;
    int cnt0 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cnt1++;
        } else {
            cnt0++;
        }
    }

    string t = s; //just as a extra part not a solution in this problem

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (cnt1 > 0) {
                t[i] = '1'; 
                cnt1--;
            } else {
                cout << n - i << endl;
                return;
            }
        } else {
            if (cnt0 > 0) {
                t[i] = '0';
                cnt0--;
            } else {
                cout << n - i << endl;
                return;
            }
        }
    };
     cout << 0 << endl;  // when all case are passed 3rd case of the problem

//    cout << t << endl; // Print the transformed string (not a part of this solution)
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
