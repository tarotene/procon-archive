#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long K, long long X)
{
    cout << (500 * K >= X ? YES : NO) << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long K;
    scanf("%lld", &K);
    long long X;
    scanf("%lld", &X);
    solve(K, X);
    return 0;
}
