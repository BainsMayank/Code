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

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int sum = 0;

    int best = 0;

    for (int i = 0; i < n; i++)

    {

        sum += max(a[i], b[i]);

        best = max(best, min(a[i], b[i]));
    }

    cout << sum + best << "\n";
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