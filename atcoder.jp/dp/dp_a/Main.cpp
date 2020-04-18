#include <bits/stdc++.h>
using namespace std;

void solve(long long N, std::vector<long long> h)
{
    long long dp[N + 1] = {0}; /* 1-indexed */

    dp[2] = abs(h[2] - h[1]);
    for (long long i = 3; i <= N; i++)
    {
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    cout << dp[N] << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> h(N + 1);
    for (int i = 1; i <= N; i++)
    {
        scanf("%lld", &h[i]);
    }
    solve(N, std::move(h));
    return 0;
}