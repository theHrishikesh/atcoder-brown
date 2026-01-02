#pragma GCC optimize(2)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline","fast-math","unroll-loops","no-stack-protector")
#pragma GCC diagnostic error "-fwhole-program"
#pragma GCC diagnostic error "-fcse-skip-blocks"
#pragma GCC diagnostic error "-funsafe-loop-optimizations"
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

#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
/*
for (char &c : s) {
    if ('A' <= c && c <= 'Z')
        c = c - 'A' + 'a';
}
*/        
#define toupper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
/*
for (char &c : s) {
    if ('a' <= c && c <= 'z')
        c = c - 'a' + 'A';
}
*/



using ll = long long;

// Check if power of 2:
// if (x > 0 && (x & (x - 1)) == 0) {
//     // x is power of two
// }

//Lowest set bit (LSB)
//int lsb = x & -x;

//Remove Lowest Setup
//x &= (x - 1);

//Count setbits
//int c = __builtin_popcount(x);        // int
//int c = __builtin_popcountll(x);      // long long


//if (x & (1LL << k)) {
//    // kth bit is set
//}
//floor div template

//Set kth bit
//x |= (1LL << k);

//Clear kth bit
//x &= ~(1LL << k);

//Toggle kth bit
//x ^= (1LL << k);

//Turn off bits from LSB to k (inclusive)
//x &= ~((1LL << (k + 1)) - 1);

//Turn on bits from LSB to k (inclusive)
//x |= (1LL << (k + 1)) - 1;

//Extract lowest k bits
//int low = x & ((1LL << k) - 1);

// Isolate highest set bit (MSB)
// int msb = 1LL << (63 - __builtin_clzll(x));

// Position of highest set bit (0-indexed)
// int pos = 63 - __builtin_clzll(x);

// Position of lowest set bit (0-indexed)
// int pos = __builtin_ctzll(x);



template <typename T>
T floor(T a, T b) {
  return a / b - (a % b && (a ^ b) < 0);
}
//ceil div template
template <typename T>
T ceil(T x, T y) {
  return floor(x + y - 1, y);
}
//balanced modulo or Euclidean modulo (out normal modulo)
template <typename T>
T bmod(T x, T y) {
  return x - y * floor(x, y);
}
// gives a quotient reminder pair for a div
template <typename T>
pair<T, T> divmod(T x, T y) {
  T q = floor(x, y);
  return {q, x - q * y};
}

const int residues[] = {1, 7, 11, 13, 17, 19, 23, 29};

vector<ll> primes_upto(ll n) 
{
    if (n < 2) return {};

    bitset<50000001> is_prime;
    is_prime.set();
    is_prime[0] = 0; // 1 is not prime

    vector<ll> primes = {2, 3, 5};

    int sqrt_n = sqrt(n);

    for (int p = 7; p <= sqrt_n; p += 2) {
        // Check only numbers coprime to 2, 3, 5
        ll mod30 = p % 30;
        bool good = false;
        for(auto r:residues)
            if (r == mod30) good = true;

        if (!good) continue;
        if (!is_prime[p/2]) continue;

        for (int j = p*p; j <= n; j += 2*p) {
            is_prime[j/2] = 0;
        }
    }

    for (int p = 7; p <= n; p += 2) {
        int mod30 = p % 30;
        for(auto r : residues) {
            if (mod30 == r) {
                if (is_prime[p/2]) primes.push_back(p);
                break;
            }
        }
    }

    return primes;
}
ll power(ll a, ll b) 
{
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

vector<ll> all_divisors(ll n) {
    vector<ll> divs;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) divs.push_back(n / i);
        }
    }
    sort(divs.begin(),divs.end());
    return divs;
}

string to_base(ll a,ll b)
{
  if (b<2 || b>36) throw invalid_argument("base out of range");
    if (a == 0) return "0";
    static const char* digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    while (a > 0) {
        int rem = a % b;
        s.push_back(digits[rem]);
        a /= b;
    }
    reverse(s.begin(),s.end());
    return s;
}

// DSU Algorithm
  struct DSU {
    vector<ll> parent, size;
    vector<ll> diff_weight;   // weight[x] - weight[parent[x]]
    ll component_count;
    ll max_comp_size;

    DSU(ll n)
    {
        parent.resize(n);
        size.assign(n, 1);
        diff_weight.assign(n, 0);  // initialize all weights to 0

        for (ll i = 0; i < n; i++) parent[i] = i;

        component_count = n;
        max_comp_size = 1;
    }

    // path compression + accumulate weights
    ll leader(ll x)
    {
        if (parent[x] == x) return x;
        ll p = leader(parent[x]);
        diff_weight[x] += diff_weight[parent[x]];
        return parent[x] = p;
    }

    // weight(x) = value[x] - value[root(x)]
    ll weight(ll x)
    {
        leader(x);
        return diff_weight[x];
    }

    // merge with constraint: value[y] - value[x] = w
    bool merge(ll x, ll y, ll w)
    {
        ll rx = leader(x);
        ll ry = leader(y);

        ll wx = weight(x); // weight from x to rx
        ll wy = weight(y); // weight from y to ry

        if (rx == ry) return false;

        // Solve: value[y] - value[x] = w
        // → (wy + diff_weight[ry-root]) - (wx + diff_weight[rx-root]) = w
        // Since roots have diff_weight = 0:
        ll diff = w + wx - wy;

        // union by size
        if (size[rx] < size[ry]) {
            swap(rx, ry);
            diff = -diff;
        }

        parent[ry] = rx;
        diff_weight[ry] = diff;    // weight[ry] = value[ry] - value[rx]
        size[rx] += size[ry];

        component_count--;
        max_comp_size = max(max_comp_size, size[rx]);
        return true;
    }

    // same component?
    bool same(ll x, ll y)
    {
        return leader(x) == leader(y);
    }

    // difference value[y] - value[x]
    ll diff(ll x, ll y)
    {
        return weight(y) - weight(x);
    }

    ll setsz(ll x)
    {
        return size[leader(x)];
    }
};

// ──────────────────────────────────────────────────────────────────────────────
// modint<998244353>
// ──────────────────────────────────────────────────────────────────────────────
template<ll M>
struct modint {
    ll v;
    constexpr modint(ll _v = 0) noexcept {
        v = _v % M;
        if (v < 0) v += M;
    }
    // addition / subtraction
    constexpr modint& operator+=(modint o) noexcept {
        v += o.v;
        if (v >= M) v -= M;
        return *this;
    }
    constexpr modint& operator-=(modint o) noexcept {
        v -= o.v;
        if (v < 0) v += M;
        return *this;
    }
    // multiplication
    constexpr modint& operator*=(modint o) noexcept {
        v = (unsigned long long)v * o.v % M;
        return *this;
    }
    // binary exponentiation
    friend modint power(modint x, ll e) {
        modint res(1);
        while (e > 0) {
            if (e & 1) res *= x;
            x *= x;
            e >>= 1;
        }
        return res;
    }
    // inverse (M must be prime)
    friend modint inv(modint x) {
        return power(x, M - 2);
    }
    // division
    constexpr modint& operator/=(modint o) noexcept {
        return *this *= inv(o);
    }

    // lee-way operators
    constexpr modint operator+(modint o) const noexcept { return modint(*this) += o; }
    constexpr modint operator-(modint o) const noexcept { return modint(*this) -= o; }
    constexpr modint operator*(modint o) const noexcept { return modint(*this) *= o; }
    constexpr modint operator/(modint o) const noexcept { return modint(*this) /= o; }

    // I/O
    friend ostream& operator<<(ostream& os, modint x) {
        return os << x.v;
    }
    friend istream& operator>>(istream& is, modint& x) {
        ll t; is >> t; x = modint(t); return is;
    }
};

static constexpr ll MOD = 998244353;
using mint = modint<MOD>;
template <typename T>
vector<T> operator+(const vector<T>& x, const vector<T>& y) {
    vector<T> r = x;
    r.insert(r.end(), y.begin(), y.end());
    return r;
}

// ──────────────────────────────────────────────────────────────────────────────
// Combinations & Permutations (nCr, nPr)
// ──────────────────────────────────────────────────────────────────────────────

static const int MAXN = 1000000;

mint fact[MAXN + 1];
mint ifact[MAXN + 1];

void init_comb()
{
    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++)
        fact[i] = fact[i - 1] * i;

    ifact[MAXN] = inv(fact[MAXN]);
    for (int i = MAXN; i >= 1; i--)
        ifact[i - 1] = ifact[i] * i;
}

// nCr
inline mint comb(int n, int r)
{
    if (r < 0 || r > n) return 0;
    return fact[n] * ifact[r] * ifact[n - r];
}

// nPr
inline mint perm(int n, int r)
{
    if (r < 0 || r > n) return 0;
    return fact[n] * ifact[n - r];
}


int main()
{

    

    ll MOD = 3;

    ll a = 5;
    ll b = 6;


    cout << ( + b)a % MOD
}
