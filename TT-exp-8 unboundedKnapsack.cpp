#include<bits/stdc++.h>
using namespace std;

int unboundedKnapsack(int k, vector<int>& arr, vector<int>& memo) {
    
    if (memo[k] != -1) {
        return memo[k];
    }
    int maxSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= k) {
            maxSum = max(maxSum, unboundedKnapsack(k - arr[i], arr, memo) + arr[i]);
        }
    }

    memo[k] = maxSum;
    return maxSum;
}

int main() {

        int n, k;
        cout<<"enter the value of n and the target value= ";
        cin >> n >> k;
        vector<int> arr(n);
        cout<<"enter the array elements= ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> memo(k + 1, -1);

        int result = unboundedKnapsack(k, arr, memo);

        cout << "Maximum sum: " << result << endl;
    return 0;
}
