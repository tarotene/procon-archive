#include <bits/stdc++.h>
using namespace std;

void solve(long long A, long long B, long long X)
{
    long long l = 0, r = pow(10, 9) + 1;
    long long N = (l + r) / 2;

    while (r - l > 1 && N > 0)
    {
        if (A * N + B * static_cast<long long>(floor(log10(N)) + 1) <= X)
        {
            l = (l + r) / 2;
        }
        else
        {
            r = (l + r) / 2;
        }

        N = (l + r) / 2;
    }

    cout << N << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long X;
    scanf("%lld", &X);
    solve(A, B, X);
    return 0;
}
