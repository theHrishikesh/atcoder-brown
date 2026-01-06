#include <bits/stdc++.h>
using namespace std;
#define overload5(_1,_2,_3,_4,_5,name,...) name
#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i=n;i--;)
#define rrep2(i,n) for(ll i=n;i--;)
#define rrep3(i,a,b) for(ll i=b;i-->(a);)
#define rrep4(i,a,b,c) for(ll i=(a)+((b)-(a)-1)/(c)*(c);i>=(a);i-=c)
#define repsq(i, n) for (ll i = 1; ((i) * (i) < n); ++i)
#define rrep(...) overload4(__VA_ARGS__,rrep4,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define each1(i,a) for(auto&&i:a)
#define each2(x,y,a) for(auto&&[x,y]:a)
#define each3(x,y,z,a) for(auto&&[x,y,z]:a)
#define each4(w,x,y,z,a) for(auto&&[w,x,y,z]:a)
#define each(...) overload5(__VA_ARGS__,each4,each3,each2,each1)(__VA_ARGS__)
#define all1(i) begin(i),end(i)
#define all2(i,a) begin(i),begin(i)+a
#define all3(i,a,b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
#define rall1(i) rbegin(i),rend(i)
#define rall2(i,a) rbegin(i),rbegin(i)+a
#define rall3(i,a,b) rbegin(i)+a,rbegin(i)+b
#define rall(...) overload3(__VA_ARGS__,rall3,rall2,rall1)(__VA_ARGS__)
#define len(x) (ll)(x).size()
#define elif else if
#define pb push_back
#define eb emplace_back
#define Test int testing; cin >> testing; while(testing--)
#define sll(...) ll __VA_ARGS__; in(__VA_ARGS__)
#define svll(n, v) vll v(n); scan(v)
#define asc(x) sort(all(x))
template<class T, size_t N> using A = array<T, N>;      // fixed-size array
// *** Primitive short aliases ***
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll,ll>;
using vpll = vector<pll>;
using setll = set<ll>;
// ----------------------------------------------------------------------------------------
template<class T> auto vmin(const T& a){ return *min_element(all(a)); }
template<class T> auto vmax(const T& a){ return *max_element(all(a)); }
template<class T, class U> bool chmin(T& a, const U& b){ if(a > T(b)){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < T(b)){ a = b; return 1; } return 0; }
template<typename T>
using maxpq = priority_queue<T>;
template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;
template <class T> std::vector<T> sort_unique(std::vector<T> vec) { sort(vec.begin(), vec.end()), vec.erase(unique(vec.begin(), vec.end()), vec.end()); return vec; }
//scan
inline void scan() {}
inline void scan(int &a) { std::cin >> a; }
inline void scan(unsigned &a) { std::cin >> a; }
inline void scan(long &a) { std::cin >> a; }
inline void scan(long long &a) { std::cin >> a; }
inline void scan(unsigned long long &a) { std::cin >> a; }
inline void scan(char &a) { std::cin >> a; }
inline void scan(float &a) { std::cin >> a; }
inline void scan(double &a) { std::cin >> a; }
inline void scan(long double &a) { std::cin >> a; }
inline void scan(std::vector<bool> &vec) {for (size_t i = 0; i < vec.size(); i++) { int a;scan(a);vec[i] = a;}}
inline void scan(std::string &a) { std::cin >> a; }
template <class T>
inline void scan(std::vector<T> &vec);
template <class T, size_t size>
inline void scan(std::array<T, size> &vec);
template <class T, class L>
inline void scan(std::pair<T, L> &p);
template <class T, size_t size>
inline void scan(T (&vec)[size]);
template <class T>
inline void scan(std::vector<T> &vec) {for (auto &i : vec) scan(i);}
template <class T>
inline void scan(std::deque<T> &vec) {for (auto &i : vec) scan(i);}
template <class T, size_t size>
inline void scan(std::array<T, size> &vec) {for (auto &i : vec) scan(i);}
template <class T, class L>
inline void scan(std::pair<T, L> &p) {scan(p.first);scan(p.second);}
template <class T, size_t size>
inline void scan(T (&vec)[size]) {for (auto &i : vec) scan(i);}
template <class T>
inline void scan(T &a) {std::cin >> a;}
inline void in() {}
template <class Head, class... Tail>
inline void in(Head &head, Tail &...tail) {
    scan(head);
    in(tail...);
}
//print functions
inline void print() { std::cout << ' '; }
inline void print(const bool &a) { std::cout << a; }
inline void print(const int &a) { std::cout << a; }
inline void print(const unsigned &a) { std::cout << a; }
inline void print(const long &a) { std::cout << a; }
inline void print(const long long &a) { std::cout << a; }
inline void print(const unsigned long long &a) { std::cout << a; }
inline void print(const char &a) { std::cout << a; }
inline void print(const char a[]) { std::cout << a; }
inline void print(const float &a) { std::cout << a; }
inline void print(const double &a) { std::cout << a; }
inline void print(const long double &a) { std::cout << a; }
inline void print(const std::string &a) {for (auto &&i : a) print(i);}
template <class T>
inline void print(const std::vector<T> &vec);
template <class T, size_t size>
inline void print(const std::array<T, size> &vec);
template <class T, class L>
inline void print(const std::pair<T, L> &p);
template <class T, size_t size>
inline void print(const T (&vec)[size]);
template <class T>
inline void print(const std::vector<T> &vec) {
    if (vec.empty()) return;
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <typename T>
inline void print(const std::set<T>& s) {
    if (s.empty()) return;
    auto it = s.begin();
    print(*it);
    for (++it; it != s.end(); ++it) {
        cout << ' ';
        print(*it);
    }
}
template <class T>
inline void print(const std::deque<T> &vec) {
    if (vec.empty()) return;
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T, size_t size>
inline void print(const std::array<T, size> &vec) {
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T, class L>
inline void print(const std::pair<T, L> &p) {
    print(p.first);
    std::cout << ' ';
    print(p.second);
}
template <class T, size_t size>
inline void print(const T (&vec)[size]) {
    print(vec[0]);
    for (auto i = vec; ++i != end(vec);) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T>
inline void print(const T &a) {
    std::cout << a;
}
inline void out() { std::cout << '\n'; }
template <class T>
inline void out(const T &t) {
    print(t);
    std::cout << '\n';
}
template <class Head, class... Tail>
inline void out(const Head &head, const Tail &...tail) {
    print(head);
    std::cout << ' ';
    out(tail...);
}
template<typename T>
void __print(const T &x) { cout << x; }

template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cout << "{"; __print(x.first); cout << ", "; __print(x.second); cout << "}";
}
template<typename T>
void __print(const vector<T> &v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        __print(v[i]);
        if (i + 1 != v.size()) cout << ", ";
    }
    cout << "]";
}
template<typename T>
void __print(const set<T> &v) {
    cout << "{";
    bool first = true;
    for (auto &i : v) {
        if (!first) cout << ", ";
        __print(i);
        first = false;
    }
    cout << "}";
}
template<typename T>
void __print(const multiset<T> &v) { __print(set<T>(v.begin(), v.end())); }

template<typename K, typename V>
void __print(const map<K, V> &v) {
    cout << "{";
    bool first = true;
    for (auto &i : v) {
        if (!first) cout << ", ";
        __print(i);
        first = false;
    }
    cout << "}";
}
template<typename T>
void __print(const unordered_set<T> &v) { __print(set<T>(v.begin(), v.end())); }
template<typename K, typename V>
void __print(const unordered_map<K, V> &v) { __print(map<K, V>(v.begin(), v.end())); }
void _print() { cout << endl; }
template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cout << ", ";
    _print(v...);
}
template<typename... Args>
void __print(const std::tuple<Args...>& t) {
    cout << "(";
    std::apply([](const auto&... args) {
        size_t i = 0;
        ((cout << (i++ ? ", " : "") << args), ...);
    }, t);
    cout << ")";
}

ll compute(vll v7, vll v5, vll v3)
{
    ll tot = len(v7) * len(v5) * len(v3);
    if (tot == 0) return 0;
    // need to rem i < j < k
    ll left7 = 0, right7 = len(v7);
    ll left3 = 0, right3 = len(v3);
    
    vpll p;
    rep(len(v7))
    {
        p.eb(v7[i],7);
    }
    rep(len(v5))
    {
        p.eb(v5[i],5);
    }
    rep(len(v3))
    {
        p.eb(v3[i],3);
    }

    asc(p);
    rep(i,0,len(p))
    {
        if (p[i].second == 7)
        {
            left7++;
            right7--;
        }
        elif (p[i].second == 5)
        {
            tot -= left3 * right7;
            tot -= left7 * right3;
        }
        elif (p[i].second == 3)
        {
            left3++;
            right3--;
        }
    }
    return tot;
};
int main() 
{
    sll(n);
    svll(n,a);

    setll valid_t;

    map<pll,vll>mp;
    rep(i,0,n)
    {
        if (a[i] % 7 == 0)
        {
            mp[{a[i]/7,7}].pb(i);
            valid_t.insert(a[i] / 7);
        }
        if (a[i] % 5 == 0)
        {
            mp[{a[i]/5,5}].pb(i);
        }
        if (a[i] % 3 == 0)
        {
            mp[{a[i]/3,3}].pb(i);
        }
    }

    ll res = 0;
    each(t,valid_t)
    {
        res += compute(mp[{t,7}],mp[{t,5}],mp[{t,3}]);
    }
    out(res);
}
