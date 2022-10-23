#include <iostream>

// Top Down DP Example
int fib(int n, int dp[]) {
    // base case
    if (n == 0 || n == 1) {
        return n;
    }
    
    // check if the state is already computed
    if (dp[n] != 0) {
        return dp[n];
    }
    
    // otherwise compute the state and store it
    return dp[n] = fib(n-1,dp) + fib(n-2,dp);
}

// Bottom Up DP Example
int fib2(int n) {
    int dp[n+1] {};
    
    // base case => assignment
    dp[0] = 0;
    dp[1] = 1;
    
    // bottom up dp
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int arr[100] {};

    std::cout << fib(5,arr) << " " << fib2(6);
    return 0;
}
