#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    string h = "hello";

    long long int i = 0, j = 0;

    while (i < s.size() and j < h.size())
    {
        if (s[i] == h[j])
            j++;
        i++;
    }

    if (j == h.size())
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int T = 1;
    while (T--) 
    {
        solve();
    }
}