#include <bits/stdc++.h>
using namespace std;

const string NO = "IMPOSSIBLE";

void solve(long long A, long long B)
{
    if (A == B)
    {
        cout << 0 << endl;
    }
    else if (A != B)
    {
        if (abs(A - B) % 2 == 0)
        {
            cout << (A + B) / 2 << endl;
        }
        else
        {
            cout << NO << endl;
        }
    }
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