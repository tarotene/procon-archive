#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N)
{
    string res = NO;
    switch (N)
    {
    case 1:
        res = YES;
        break;

    default:
        if (N > 81)
        {
            break;
        }
        else
        {
            for (size_t i = 2; i <= 9; i++)
            {
                if (N % i == 0 && N / i <= 9)
                {
                    res = YES;
                    break;
                }
            }
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
