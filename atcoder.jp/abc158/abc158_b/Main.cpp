#include <bits/stdc++.h>
using namespace std;

void solve(long long N, long long A, long long B)
{
    cout << (N / (A + B)) * A + min(A, N % (A + B)) << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    scanf("%lld", &N);
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    solve(N, A, B);
    return 0;
}