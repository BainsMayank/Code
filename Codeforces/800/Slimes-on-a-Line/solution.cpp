#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <climits>
#include <numeric>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const long long INF = 1e18;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr)
    {
        cin >> x;
    }

    int mx = *max_element(arr.begin(), arr.end());
    int mn = *min_element(arr.begin(), arr.end());

    int req = (mx + mn) / 2;
    int ans = max(abs(mx - req), abs(mn - req));

    std::cout << ans << "\n";
}

signed main()
{
    fastio();

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}