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
#define ll long long

static const ll maxn = 200001;
static ll f[maxn];
static ll pref[maxn];



int main()
{
    ll n, d, p;
    cin >> n >> d >> p;

    for (ll i = 0; i < n; i++) cin >> f[i];    
    sort(f, f + n, greater<>());
    
    ll ans = 0;
    for (ll i = 0; i < n; i += d)
    {
        ll cost = 0;
        for (ll j = i; j < min(n,i + d); j++)
        {
            cost += f[j];
        }
        if (cost > p)
        {
            ans += p;
        }
        else ans += cost;
    }
    cout << ans << endl;

}