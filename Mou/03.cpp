#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, k,x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "Yes \n";
        cout << n << '\n';

        for (int i = 0; i< n; i++)
            cout << 1 << " ";
        cout << '\n';
    }
    else
    {
         if (k >=2 and n%2 == 0)
    {
        cout << "Yes \n";
        cout << n/2 << '\n';
        for (int i = 0; i< n/2 ; i++)
        cout << 2 << " ";
        cout << '\n';
    }
    else if (k>=3)
    {
        cout << "Yes\n";
        cout << n/2 << '\n' << 3 << '\n' ;

        for (int i = 0; i< n/2 ; i++)
        cout << 2 << " ";
        cout << '\n';
    }
    else
        cout << "No\n";
    }}

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
    