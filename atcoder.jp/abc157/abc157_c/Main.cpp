#include <bits/stdc++.h>
using namespace std;

void solve(int N, int M, std::vector<int> s, std::vector<int> c)
{
    string res(N, '#');
    if (M == 0)
    {
        if (N == 1)
        {
            res[0] = '0';
            cout << res << endl;
            return;
        }
        else
        {

            res[0] = '1';
            for (int i = 1; i < N; i++)
            {
                res[i] = '0';
            }

            cout << res << endl;
            return;
        }
    }

    for (int i = 0; i < M; i++)
    {
        string sa = to_string(c[i]);
        if (N >= 2 && s[i] == 1 && sa[0] == '0')
        {
            cout << -1 << endl;
            return;
        }

        if (res[s[i] - 1] != '#' && sa[0] != res[s[i] - 1])
        {
            cout << -1 << endl;
            return;
        }

        {
            // cout << "res[" << s[i] - 1 << "] <= " << c[i] << endl;
            res[s[i] - 1] = sa[0];
            // cout << "res[" << s[i] - 1 << "] = " << res[s[i] - 1] << endl;
        }
    }

    if (N == 1)
    {
        if (res[0] == '#')
        {
            res[0] = '0';
        }

        cout << res << endl;
    }
    else
    {
        if (res[0] == '#')
        {
            res[0] = '1';
        }

        for (int i = 1; i < N; i++)
        {
            if (res[i] == '#')
            {
                res[i] = '0';
            }
        }
        cout << res << endl;
    }
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    int N;
    cin >> N;
    int M;
    cin >> M;

    std::vector<int> s(M);
    std::vector<int> c(M);
    for (int i = 0; i < M; i++)
    {
        cin >> s[i] >> c[i];
    }
    solve(N, M, std::move(s), std::move(c));
    return 0;
}