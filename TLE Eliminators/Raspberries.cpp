#include <bits/stdc++.h>
using namespace std;
#include<vector>

void solve(){
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
    for(int &it : arr){
    	cin>>it
	} 	
    int minOperations = k - 1;  //wrost-case    k = 5, Array = [2, 4, 7]
    int evenCount = 0;
 
    for (int i = 0; i < n; i++){  
        if (arr[i] % 2 == 0){
            evenCount++;
        }
        if (arr[i] % k == 0){
            minOperations = 0;
        } else{
            minOperations = min(minOperations, k - arr[i] % k);
        }
    }
 
    if (k == 4){
        if (evenCount >= 2){
            cout << 0 << '\n';
        }else if (evenCount == 1){
            cout << min(minOperations, 1) << '\n';
        }else{
            cout << min(2, minOperations) << '\n';
        }
    }else{
        cout << minOperations << '\n';
    }
}
 
int main()
{
//    ios::sync_with_stdio(0);//to make the input and output fast for cP 
//    cin.tie(0);
    int t;
    cin >> t; 
    while (t--){
        solve();
    } 
    return 0;
}

//Presence of Prime k: If k is a prime number and it is present in the array, the product will be divisible by k.
//Absence of Prime k: If k is not in the array and the array contains other prime numbers, the product may not be 
//	divisible by k.