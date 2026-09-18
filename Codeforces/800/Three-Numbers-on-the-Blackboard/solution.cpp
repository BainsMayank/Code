#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <numeric>
#include <utility>
#include <climits>
#include <cstdint>
#include <iomanip>
#include <functional>

using namespace std;

// Type aliases
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;

// Macros & Constants
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) static_cast<int>((x).size())
#define pb push_back
#define mp make_pair
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int a,b,c = 0;
    cin >> a >> b >> c;
    int mx = max({a, b, c});
    int mn = min({a, b, c});
    int mid = a + b + c - mx - mn;
    if (a == b && b == c && c == a) {
        cout << 0 << endl;
    } else if (mx - mn > mid){
        cout << mid << endl;
    }
    else{
        cout << mx - mn << endl;
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}