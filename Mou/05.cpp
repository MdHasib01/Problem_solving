#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long int n, k;
    cin >> n >> k;
 
    if (!(n & 1))
        cout << "YES\n";
    else if (n % k == 0)
        cout << "YES\n";
    else if ((n - k) % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
 
}