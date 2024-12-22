#include <iostream>
#include <set>
#include <vector>
using namespace std;

void Solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    set<int> known_questions;
    for (int i = 0; i < k; i++) {
        int question;
        cin >> question;
        known_questions.insert(question);
    }

    string result = "";
    for (int i = 0; i < m; i++) {
        if (known_questions.count(a[i]) == 0) {
            result += "1";  // Monocarp will pass
        } else {
            result += "0";  // Monocarp won't pass
        }
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }

    return 0;
}










