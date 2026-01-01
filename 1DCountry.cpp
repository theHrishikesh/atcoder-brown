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

#define Test int testcases; cin >> testcases; while(testcases--)
using ll = long long;


static const ll maxn = 200005;
static ll x[maxn];
static ll p[maxn];
static ll pref[maxn];
int main() 
{
    ll n; cin >> n;
    x[0] = 0;
    for (ll i = 0; i < n; i++) cin >> x[i];
    p[0] = 0;
    for (ll i = 0; i < n; i++) cin >> p[i];
    pref[0] = 0;
    for (ll i = 0; i < n; i++) pref[i + 1] = pref[i] + p[i];

    ll q; cin >> q;
    ll l, r;
    for (ll i = 0; i < q; i++)
    {
        cin >> l >> r;
        ll lower = lower_bound(x, x + n, l) - x;
        ll upper = upper_bound(x, x + n, r) - x;
        cout << pref[upper] - pref[lower] << endl;
    }

}