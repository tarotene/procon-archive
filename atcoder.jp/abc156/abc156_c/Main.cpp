#include <bits/stdc++.h>
using namespace std;

void solve(long long N, std::vector<long long> X)
{
    long long T = 0, P = 0; /* T: sum of Xs, P: optimal P */

    for (size_t i = 0; i < N; i++)
    {
        T += X[i];
    }
    P = T / N;

    long long S = 0; /* stamina */
    for (size_t i = 0; i < N; i++)
    {
        S += (X[i] - P) * (X[i] - P);
    }

    S = min(S, S + 2 * T - N * (2 * P - 1));
    S = min(S, S - 2 * T + N * (2 * P + 1));

    cout << S << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> X(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &X[i]);
    }
    solve(N, std::move(X));
    return 0;
}
