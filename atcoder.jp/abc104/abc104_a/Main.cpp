#include <bits/stdc++.h>
using namespace std;

void solve(long long R)
{
    if (R < 1200)
    {
        cout << "ABC" << endl;
    }
    else if (R < 2800)
    {
        cout << "ARC" << endl;
    }
    else
    {
        cout << "AGC" << endl;
    }
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long R;
    scanf("%lld", &R);
    solve(R);
    return 0;
}
