#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int w;
    cin >> w;
    w % 2 == 0 && w > 2 ? cout << "YES\n" : cout << "NO\n";
    
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