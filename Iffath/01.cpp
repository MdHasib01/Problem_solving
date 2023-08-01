#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long int n;
    cin >> n;
 
    while (true)
    {
        int temp = n +  1;
        int a = temp % 10;
        temp /= 10;
        int b = temp % 10;
        temp /= 10;
        int c = temp % 10;
        temp /= 10;
        int d = temp % 10;
 
        if (a != b && a != c && a != d && b != c && b != d && c != d)
            break;
        else
            n++;
    }
 
    cout << n + 1 << '\n';
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