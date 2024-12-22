#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Solve() {
    int n;  
    cin >> n;
    
    int mini = INT_MAX; 
    int second_mini = INT_MAX;  
    int second_mini_sum = 0;  
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int> v(m);        
        for (int j = 0; j < m; j++) {
            cin >> v[j];
        }        
        sort(v.begin(), v.end());
        mini = min(mini, v[0]); 
        second_mini_sum += v[1]; 
        second_mini = min(second_mini, v[1]);  
    }    
    cout << (mini + second_mini_sum - second_mini) << endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        Solve();
    }
}
