#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned long long dp[n + 1] = {0};
    dp[1] = 3;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] * 2;
    }
    cout << dp[n] << endl;
    return 0;
}