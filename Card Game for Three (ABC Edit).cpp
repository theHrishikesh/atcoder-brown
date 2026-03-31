/*￥￥￥￥CodePoet￥￥￥￥*/
#include<bits/stdc++.h>
#include<ext/rope>
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define eb emplace_back
#define fi first
#define se second
#define lowbit(x) ((x)&-(x))
//#define int long long
using namespace std;
using namespace __gnu_cxx;
using ll = long long;
using ull = unsigned long long;
using PII = pair<int, int>;
using PLL = pair<ll, ll>;
const int N = 1e6 + 10;
const int INF = 0x3f3f3f3f;
const ll inf = 0x3f3f3f3f3f3f3f3f;

map<char, string> mp;
void solve()
{
    cin >> mp['a'] >> mp['b'] >> mp['c'];
    char now = 'a';
    while (1) {
        if (!mp[now].size()) {
            cout << (char)(now - 32) << '\n';break;
        }
        char c = mp[now][0];
        mp[now].erase(0, 1);
        now = c;
    }



}



signed main()
{
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T; T = 1;
    //cin>>T;
    while (T--) { solve(); }
}
