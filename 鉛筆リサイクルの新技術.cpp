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


int main()
{
    ll batchsize, newperbatch, current;
    cin >> batchsize >> newperbatch >> current;

    ll batches , recycled;
    ll later = 0;

    ll ans = current;
    while (true)
    {

        batches = current / batchsize;
        later += current % batchsize;
        recycled = (batches * newperbatch);

        
        if (recycled == 0 && later < batchsize)
        {
            break;
        }
        else if (recycled == 0 && later >= batchsize)
        {

            current = later;
            later = 0;
            continue;
        }
        
        ans += recycled;
        current = recycled;

    }

    cout << ans << '\n';
}

