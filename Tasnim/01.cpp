    #include <bits/stdc++.h>
    using namespace std;
     
    void solve()
    {
        string s;
        cin >> s;
        if(s.size() > 10)
            cout <<s[0]<<s.size()-2<<s[s.size()-1]<<'\n';
        else
            cout << s << '\n';
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