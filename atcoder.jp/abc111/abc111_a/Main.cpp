#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            cout << 9;
        }
        else if (s[i] == '9')
        {
            cout << 1;
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    string s;
    cin >> s;
    solve(s);
    return 0;
}