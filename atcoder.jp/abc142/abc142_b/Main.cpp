#include <bits/stdc++.h>
using namespace std;

void solve(long long N, long long K, std::vector<long long> h)
{
    long long M = 0;
    for (size_t i = 0; i < N; i++)
    {
        if (h[i] >= K)
        {
            M++;
        }
    }
    cout << M << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> h(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &h[i]);
    }
    solve(N, K, std::move(h));
    return 0;
}
