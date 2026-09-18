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
    if(a==b || b==c || c==a){
        cout << "0" << "\n";
        return;
    }
    int round = 0;
    int min_diff = min({abs(a-b), abs(b-c), abs(c-a)});
    cout << min_diff << "\n";
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