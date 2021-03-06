#include <bits/stdc++.h>
using namespace std;

void solve(long long K)
{
    vector<long long> a(200000 + 1, 0LL);
    int n = 9;
    for (size_t i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    int j = 1, k = 10;
    while (k <= 150000)
    {
        if (a[j] % 10 == 0)
        {
            a[k] = 10 * a[j];
            a[k + 1] = 10 * a[j] + 1;
            k += 2;
        }
        else if (a[j] % 10 == 9)
        {
            a[k] = 10 * a[j] + 8;
            a[k + 1] = 10 * a[j] + 9;
            k += 2;
        }
        else
        {
            a[k] = 10 * a[j] + a[j] % 10 - 1;
            a[k + 1] = 10 * a[j] + a[j] % 10;
            a[k + 2] = 10 * a[j] + a[j] % 10 + 1;
            k += 3;
        }
        j++;
    }

    cout << a[K] << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long K;
    scanf("%lld", &K);
    solve(K);
    return 0;
}
