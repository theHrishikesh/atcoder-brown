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


static const ll maxn = 300005;
static ll a[maxn];
static ll pref[maxn];



int main() // pigeonhole principle
{
    ll n , q;
    cin >> n >> q;
    
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n)
    ;
    pref[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + a[i];
    }

    for (ll i = 0; i < q; i++)
    {
        ll b; cin >> b;

        if (b > a[n - 1])
        {
            cout << -1 << endl;
            continue;
        }

        ll idx = lower_bound(a, a + n, b) - a;
        ll s = pref[idx] + (n - idx) * (b - 1);
        cout << s + 1 << endl;
    }
}
