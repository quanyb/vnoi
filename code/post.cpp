/*
    title: post.cpp
    date: 2024-03-16 21:55:08
*/
#include <bits/stdc++.h>
#define Vani "task"
#define FOR(i, a, b) for(int i = (int)a; i <= (int)b; ++i) 
#define FOD(i, a, b) for(int i = (int)a; i >= (int)b; --i)
#define fi first
#define se second
#define ii pair<int, int>
#define mii map<int, int>

using ll = long long;
using ull = unsigned long long;

template <typename s, typename T> void maxinum(s &a, const T &b) {if(a < b) a = b;}
template <typename s, typename T> void mininum(s &a, const T &b) {if(a > b) a = b;}

#define rng_init mt19937 rnd(chrono::steady_clock::now(), time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define all(x) (x).begin(), (x).end();
#define sz(x) (int) (x).size()
// #define int long long

using namespace std;

const int maxn = 1000007, inf = trunc(1e9) + 5;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << a + b;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    if(fopen(Vani".inp", "r")) {
        freopen(Vani".inp", "r", stdin);
        freopen(Vani".out", "w", stdout);
    }
    int test = 1;
    // cin >> test;
    while(test--) {
        solve();
    }
    return 0;
}
