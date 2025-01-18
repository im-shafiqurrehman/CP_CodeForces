#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> reconstructPermutation(int n, const vector<string>& matrix) {
    vector<int> in_degree(n, 0);
    queue<int> q;
    vector<int> permutation;

    // Calculate in-degrees
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == '1') {
                in_degree[j]++;
            }
        }
    }

    // Initialize queue with vertices having in-degree 0
    for (int i = 0; i < n; ++i) {
        if (in_degree[i] == 0) {
            q.push(i);
        }
    }

    // Perform topological sort
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        permutation.push_back(u + 1); // Store the result (1-based index)

        for (int v = 0; v < n; ++v) {
            if (matrix[u][v] == '1') {
                in_degree[v]--;
                if (in_degree[v] == 0) {
                    q.push(v);
                }
            }
        }
    }

    return permutation;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<string> matrix(n);
        for (int i = 0; i < n; ++i) {
            cin >> matrix[i];
        }

        vector<int> result = reconstructPermutation(n, matrix);

        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}