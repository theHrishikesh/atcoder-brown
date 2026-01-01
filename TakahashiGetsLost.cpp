#include <bits/stdc++.h>
using namespace std;

struct IoSetup {
    IoSetup() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }
} iosetup;

using ll = long long;

int main()
{
    ll h, w, n;
    cin >> h >> w >> n;

    string t;
    cin >> t;

    vector<string> grid(h);
    for (ll i = 0; i < h; i++)
    {
        cin >> grid[i];
    }

    ll ans = 0;

    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            if (grid[i][j] != '.') continue;

            ll x = i, y = j;
            bool reached = true;

            for (char c : t)
            {
                if (c == 'L') y--;
                else if (c == 'R') y++;
                else if (c == 'U') x--;
                else x++;

                if (x < 0 || x >= h || y < 0 || y >= w || grid[x][y] == '#')
                {
                    reached = false;
                    break;
                }
            }

            if (reached) ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}
