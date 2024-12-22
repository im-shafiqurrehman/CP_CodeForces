#include<bits/stdc++.h>
using namespace std;
#define int long long

void Solve() {
    int N, D;
    cin >> N >> D;
    
    vector<int> power(N); 
    for (int &p : power) {
        cin >> p;
    }
    
    sort(power.rbegin(), power.rend()); // Sort in decreasing order

    int players = 0, wins = 0, i = 0;
    
    while (i < N && players < N) {
        int x = ceil((D + 1) / (power[i] * 1.0)); 
        players += x;  
        if (players <= N) wins++; 
        i++;  
    }    
    cout << wins << endl;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int t = 1;
    while (t--) {
        Solve();
    }
    return 0;
}
