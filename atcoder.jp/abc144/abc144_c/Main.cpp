#include <bits/stdc++.h>
using namespace std;

void solve(long long N)
{
    long long res = 0;

    long long max = static_cast<long long>(sqrt(static_cast<double>(N)));
    for (int i = max; i >= 0; i--)
    {
        if (N % i == 0)
        {
            res = (N / i - 1) + (i - 1);
            break;
        }
    }

    cout << res << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}