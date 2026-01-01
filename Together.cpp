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


static const ll maxn = 100001;
static ll a[maxn];
int main() 
{
    ll n; cin >> n;
    map<ll,ll>cnt;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        cnt[a[i] + 1]++;
        cnt[a[i] - 1]++;
    }

    ll ans = 0;
    for (auto [k,v] : cnt)
    {
        ans = max(ans, v);
    }

    cout << ans << '\n';

}