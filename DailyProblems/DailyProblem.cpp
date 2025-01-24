#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	
void Solve() {
    int n, x;
    cin >> n >> x;
    vector<int> gasStation(n);
    
    for (int i = 0; i < n; i++) {
        cin >> gasStation[i];
    }
    int maxDist = gasStation[0];
    for (int i = 1; i < n; i++) {
        maxDist = max(maxDist, gasStation[i] - gasStation[i - 1]);
    }
    maxDist = max(maxDist, (x - gasStation[n - 1]) * 2);
    
    cout << maxDist << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}
