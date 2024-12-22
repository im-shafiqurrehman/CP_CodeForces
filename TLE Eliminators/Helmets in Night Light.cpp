#include<bits/stdc++.h>
using namespace std;
#define int long long int


void solve() {
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> a(n);

    
    for(int i = 0; i < n; i++) cin >> a[i].second;  // storing of b
    for(int i = 0; i < n; i++) cin >> a[i].first;   // storing of a

    // This is done to avoid the use of a comparator function for sorting
    // When we apply sorting on a pair, it will only sort by the first elements
    // In this case, we want to sort by 'b' (cost), so we store 'b' in the first element

    sort(a.begin(), a.end());  // Sorting pairs based on 'b' since 'b' is stored as the first element

    int cost = p;
    int resident = 1;

    for (auto& it : a) {  
        int f = it.first;
        int s = it.second;

        if (f > p) break;   // If 'f' is greater than 'p', we cannot get the minimum cost

        // So Pak Chenak himself will make the announcement as he can announce more than one person
        cost += (f * min(n - resident, s));
        resident += min(n - resident, s);
    }
    cost += ((n - resident) * p);
    cout << cost << endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

