#include <iostream>
#include <vector>
#include <set>
using namespace std;

void Solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> result(n, -1);  
        set<int> available;         
        for (int i = 1; i <= n; i++) {
            available.insert(i);  
        }
        bool possible = true;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == 'p') {
                if (result[i] == -1) {
                    if (available.empty()) {
                        possible = false;
                        break;
                    }
                    result[i] = *available.begin();
                    available.erase(available.begin());
                }
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 's') {
                if (result[i] == -1) {
                    if (available.empty()) {
                        possible = false;
                        break;
                    }
                    result[i] = *available.begin();
                    available.erase(available.begin());
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == '.' && result[i] == -1) {
                if (available.empty()) {
                    possible = false;
                    break;
                }

                result[i] = *available.begin();
                available.erase(available.begin());
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solve();
    return 0;
}
