#include <bits/stdc++.h>
using namespace std;

void solve(long long N, std::string S)
{
    long long changes = 0LL;
    for (size_t i = 0; i < N - 1; i++)
    {
        if (S[i] != S[i + 1])
        {
            changes++;
        }
    }
    long long res = changes + 1;
    cout << res << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    scanf("%lld", &N);
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}