#include <bits/stdc++.h>
using namespace std;

void solve(long long A, long long B)
{
    for (size_t i = 0; i < 10; i++)
    {
        long long price = 10 * B + i;

        if (floor(price * 0.08) == A && floor(price * 0.1) == B)
        {
            cout << price << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    solve(A, B);
    return 0;
}
