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

#ifdef LOCAL
void setIO(const char* s) {
    freopen((string(s) + ".in").c_str(), "r", stdin);
    freopen((string(s) + ".out").c_str(), "w", stdout);
}
#endif

#define ll long long
#define Test int testcases; cin >> testcases; while(testcases--)


static const ll dx8[8] = {1,0,-1,0,1,1,-1,-1};
static const ll dy8[8] = {0,1,0,-1,1,-1,1,-1};

const ll maxh = 1001;
const ll maxw = 1001;


ll h,w;
static char g[maxh][maxw];
static bool vis[maxh][maxw];



void dfs(ll x, ll y)
{
    vis[x][y] = 1;
    for (ll i = 0; i < 8; i++)
    {
        ll nx = x + dx8[i], ny = y + dy8[i];
        if (nx <h && ny < w && 0 <= nx && 0 <= ny && !vis[nx][ny] && g[nx][ny] == '#')
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    cin >> h >> w;

    memset(vis,0,sizeof(vis));

    for (ll i = 0; i < h; i++)
    {
        cin >> g[i];
    }

    ll cnt = 0;
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            if (g[i][j] == '#' && !vis[i][j])
            {
                dfs(i,j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

}