#include <bits/stdc++.h>
using namespace std;

void solve(long long K)
{
    cout << (K % 2 == 1 ? (K * K - 1) / 4 : K * K / 4) << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long K;
    scanf("%lld", &K);
    solve(K);
    return 0;
}