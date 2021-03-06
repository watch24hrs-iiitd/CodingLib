# include "bits/stdc++.h"
 
using namespace std;
 
#define endl "\n"
typedef long long int ll;
#define f first
#define s second
 
#define SEND_HELP ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
// DEBUG
void __print(int x) { cerr << x; }
void __print(ll x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char* x) { cerr << '\"' << x << '\"'; }
void __print(const string& x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
 
template<typename T, typename V>
void __print(const pair<T, V>& x) { cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}'; }
template<typename T>
void __print(const T& x) { int _ = 0; cerr << '{'; for (auto& i : x) cerr << (_++ ? "," : ""), __print(i); cerr << "}"; }
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) { __print(t); if (sizeof...(v)) cerr << ", "; _print(v...); }
#ifdef LOCAL_PROJECT
    #define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
    #define dbg(x...)
#endif
 
const ll INF = 2e17;
const ll MOD = 1e9 + 7;

void solve_tc(int test_case) {
    
}

int main() { 
    #ifdef LOCAL_PROJECT
        freopen("inputf.in", "r", stdin); // LINUX
    #endif
    SEND_HELP

    auto start_exec = chrono::high_resolution_clock::now();
    int tt = 1;
    cin >> tt; // TEST CASE INPUT
    
    for (int tc = 1; tc <= tt; ++ tc) {
        solve_tc(tc);
    }

    auto stop_exec = chrono::high_resolution_clock::now();
    auto duration_exec = chrono::duration_cast<chrono::milliseconds>(stop_exec - start_exec);
    #ifdef LOCAL_PROJECT
        cout << "\n\nDURATION EXECUTION: " << duration_exec.count() << "ms\n";
    #endif

    return 0;
}

/*
https://github.com/watch24hrs-iiitd/CodingLib
*/