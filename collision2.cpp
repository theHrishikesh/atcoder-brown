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

static const ll maxn = 200005;
static ll x[maxn], y[maxn];

int main()
{
    ll n; cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    string s;
    cin >> s;

    map<ll,array<ll,2>> ylevel;

    for (ll i = 0; i < n; i++)
    {
        if (!ylevel.count(y[i])) ylevel[y[i]] = {LLONG_MAX,LLONG_MIN};
        if (s[i] == 'R')
        {
           ylevel[y[i]][0] = min(ylevel[y[i]][0],x[i]);
        }
        else
        {
            ylevel[y[i]][1] = max(ylevel[y[i]][1],x[i]);
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (ylevel[y[i]][0] <= ylevel[y[i]][1])
        {
            cout << "Yes" << '\n';
            return 0;
        }
    }

    cout << "No" << endl;
}