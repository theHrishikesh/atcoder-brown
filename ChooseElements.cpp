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


static const ll maxn = 200005;
static ll a[maxn];
static ll b[maxn];
static ll dp[maxn][2];

int main()
{
    ll n , k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    dp[0][0] = 1;
    dp[0][1] = 1;
    for (ll i = 1; i < n; i++)
    {
        if (dp[i - 1][0] == 1 && abs(a[i] - a[i - 1]) <= k)
        {
            dp[i][0] = 1;
        }
        if (dp[i - 1][0] == 1 && abs(b[i] - a[i - 1]) <= k)
        {
            dp[i][1] = 1; 
        }
        if (dp[i - 1][1] == 1 && abs(a[i] - b[i - 1]) <= k)
        {
            dp[i][0] = 1;
        }
        if (dp[i - 1][1] == 1 && abs(b[i] - b[i - 1]) <= k)
        {
            dp[i][1] = 1;
        }
    }
   
    if (dp[n - 1][0] == 1 || dp[n - 1][1] == 1)
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
}

