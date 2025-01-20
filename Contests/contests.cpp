#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int score = 0;

        for (auto& [num, count] : freq) {
            int complement = k - num;
            if (freq.find(complement) != freq.end()) {
                int pairs = min(count, freq[complement]);
                if (num == complement) {
                    pairs /= 2;
                }
                score += pairs;
                freq[num] -= pairs;
                freq[complement] -= pairs;
            }
        }

        cout << score << "\n";
    }
}

int main() {
    solve();
    return 0;
}
