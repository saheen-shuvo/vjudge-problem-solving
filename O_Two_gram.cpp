#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> freq;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        string t = s.substr(i, 2);
        freq[t]++;
    }
    int res = INT_MIN;
    string ans;
    for (auto x : freq)
    {
        if (x.second > res)
        {
            res = x.second;
            ans = x.first;
        }
    }
    cout << ans;
    return 0;
}