#include <bits/stdc++.h>
using namespace std;

void solve(std::string S)
{
    int res = 0;
    for (size_t i = 0; i < S.size() / 2; i++)
    {
        res += static_cast<int>(S[i] != S[S.size() - i - 1]);
    }
    cout << res << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
