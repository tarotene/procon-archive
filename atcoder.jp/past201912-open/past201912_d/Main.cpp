#include <bits/stdc++.h>
using namespace std;

void solve(long long N, std::vector<long long> A)
{
    vector<long long> B(N + 1, 0);
    for (size_t i = 0; i < N; i++)
    {
        B[A[i]]++;
    }

    long long del = 0, dup = 0;

    for (size_t i = 1; i <= N; i++)
    {
        if (B[i] == 0)
        {
            del = i;
        }

        if (B[i] == 2)
        {
            dup = i;
        }
    }

    if (del > 0 || dup > 0)
    {
        cout << dup << " " << del << endl;
    }
    else
    {
        cout << "Correct" << endl;
    }
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}