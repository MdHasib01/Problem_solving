
    #include <bits/stdc++.h>
    using namespace std;
     
    void solve()
    {
        string s;
        getline(cin , s);
        string x = "";
        string y = "";
     
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1' || s[i] == '2' || s[i] == '3')
                x += s[i];
        }
        sort(x.begin(), x.end());
     
        for (int i = 0; i < x.size() - 1; i++)
        {
            y += x[i];
            y += '+';
        }
        cout << y + x[x.size() - 1] << '\n';
        
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