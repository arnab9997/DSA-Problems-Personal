#include <bits/stdc++.h>
#define ll long long
using namespace std;

int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int dp[amount+1];
        dp[0] = 0;

        int i, j, INF = 1000000;

        for(i=1; i<amount+1; i++)
            dp[i] = INF;

        for(i=1; i<amount+1; i++){
            int ans = INF;
            for(j=0; j<n; j++)
                if(coins[j]<=i)
                    ans = min(ans, dp[i-coins[j]]);
            if(ans == INF)
                dp[i] = INF;
            else
                dp[i] = ans+1;
        }

        if(dp[amount] == INF)
            return -1;

        return dp[amount];
    }

int main(){
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);
    int amount = 11;
    cout<<coinChange(coins, amount);
    return 0;
}
