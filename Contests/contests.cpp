#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min_ind = 0, max_ind = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= arr[min_ind]) {
            min_ind = i;
        }
        if (arr[i] > arr[max_ind]) {
            max_ind = i;
        }
    }

    int total_swaps = abs(max_ind - 0) + abs(min_ind - (n - 1));
    if (max_ind > min_ind) {
        total_swaps--;
    }

    cout << total_swaps << endl;

    return 0;
}
