#include <bits/stdc++.h>
using namespace std;

void solve(std::vector<long long> A)
{
    vector<int> b(0);
    b.push_back(abs(A[0] - A[1]));
    b.push_back(abs(A[1] - A[2]));
    b.push_back(abs(A[2] - A[0]));
    sort(b.begin(), b.end());

    cout << (b[0] + b[1]) << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    std::vector<long long> A(3);
    for (int i = 0; i < 3; i++)
    {
        scanf("%lld", &A[i]);
    }
    solve(std::move(A));
    return 0;
}
