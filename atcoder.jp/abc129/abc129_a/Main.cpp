#include <bits/stdc++.h>
using namespace std;

void solve(long long P, long long Q, long long R)
{
    cout << min(P + Q, min(Q + R, R + P)) << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long P;
    scanf("%lld", &P);
    long long Q;
    scanf("%lld", &Q);
    long long R;
    scanf("%lld", &R);
    solve(P, Q, R);
    return 0;
}
