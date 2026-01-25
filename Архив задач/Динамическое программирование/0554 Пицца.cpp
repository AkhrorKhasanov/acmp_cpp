#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dp[n + 1] = {0};
    dp[1] = 2;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + i;
    }
    cout << dp[n] << endl;
    return 0;
}