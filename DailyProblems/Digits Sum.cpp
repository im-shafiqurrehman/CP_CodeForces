#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n < 9) {
            cout << 0 << endl;
        } else {
            cout << (n - 9) / 10 + 1 << endl;
        }
    }
    return 0;
}
