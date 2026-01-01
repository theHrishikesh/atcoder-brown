#include <bits/stdc++.h>
using namespace std;
struct IoSetup {
    IoSetup() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(15);
        cerr << fixed << setprecision(15);
    }
} iosetup;
void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
#define Test int testcases; cin >> testcases; while(testcases--)
using ll = long long;





int main()
{
    string s;
    cin >> s;

    map<string,ll> dist;

    string root = s;

    queue<string>q; q.push(root);
    dist[root] = 0;

    while(!q.empty())
    {
        string s = q.front();
        q.pop();

        for (ll i = 0; i + 1 < 7; i++)
        {
            string copy_s = s;
            swap(copy_s[i],copy_s[i + 1]);
            if (!dist.count(copy_s))
            {
                dist[copy_s] = dist[s] + 1;
                q.push(copy_s);
            }
        }
    }

    cout << dist["atcoder"] << '\n';
}