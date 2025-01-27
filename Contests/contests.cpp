#include <iostream>
#include <string>
using namespace std;

int countBlocks(const string& s) {
    int blocks = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == '1') {
            ++blocks;
        }
    }
    return blocks;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << countBlocks(s) << endl;
    }
    return 0;
}
