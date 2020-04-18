#include <bits/stdc++.h>
using namespace std;

namespace
{
struct case_insensitive_less : public std::binary_function<char, char, bool>
{
    bool operator()(char x, char y) const
    {
        return toupper(static_cast<unsigned char>(x)) <
               toupper(static_cast<unsigned char>(y));
    }
};

bool NoCaseLess(const std::string &a, const std::string &b)
{
    return std::lexicographical_compare(a.begin(), a.end(),
                                        b.begin(), b.end(), case_insensitive_less());
}

} // namespace

void solve(std::string S)
{
    vector<string> word(0);

    int idx = -1;
    string toggle = "end";

    for (size_t i = 0; i < S.length(); i++)
    {
        if ('A' <= S[i] && S[i] <= 'Z')
        {
            if (toggle == "end")
            {
                toggle = "start";

                word.push_back("");
                word[++idx].push_back(S[i]);
            }
            else
            {
                toggle = "end";
                word[idx].push_back(S[i]);
            }
        }
        else
        {
            word[idx].push_back(S[i]);
        }
    }

    sort(word.begin(), word.end(), NoCaseLess);

    for (const auto &e : word)
    {
        cout << e;
    }
    cout << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
