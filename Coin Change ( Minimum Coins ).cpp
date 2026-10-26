#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, amount;

    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> coins(n);

    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cout << "Enter amount: ";
    cin >> amount;

    const int INF = 1000000000;
    vector<int> dp(amount + 1, INF);

    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] > 0 && coins[j] <= i) {
                if (dp[i - coins[j]] != INF &&
                    dp[i] > dp[i - coins[j]] + 1) {
                    dp[i] = dp[i - coins[j]] + 1;
                }
            }
        }
    }

    if (dp[amount] == INF)
        cout << -1;
    else
        cout << dp[amount];

    return 0;
}
