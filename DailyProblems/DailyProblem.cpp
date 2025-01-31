#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Solve() {
    int n;
    cin >> n;
    vector<string> s(n); 

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

      unordered_map<int, int> dp;
        for (int item : arr) {
            dp[item]++;
        }


        if (dp.size() == 1) {
            cout << "Yes" << endl;
        } else if (dp.size() == 2) {
            auto it = dp.begin();
            int count1 = it->second;
            ++it;
            int count2 = it->second;
            int temp = abs(count1 - count2);
            if (temp <= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            cout << "No" << endl;
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
