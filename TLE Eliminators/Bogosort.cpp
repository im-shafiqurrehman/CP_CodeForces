#include<bits/stdc++.h>
using namespace std;
#define int long long

void Solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int &ele : a) {
        cin >> ele;
    }
    
    sort(a.rbegin(), a.rend());   // as index is loser and elements are higher so they does not match to each other    
    for(int ele : a) {
        cout << ele << " ";
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        Solve();
    }
    
    return 0;
}
