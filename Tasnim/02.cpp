    #include <bits/stdc++.h>
    using namespace std;
     
    void solve()
    {
        string text;
        getline(cin, text);
     
        if (text[0] != toupper(text[0]))
            text[0] = toupper(text[0]);
     
        cout << text << '\n';
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