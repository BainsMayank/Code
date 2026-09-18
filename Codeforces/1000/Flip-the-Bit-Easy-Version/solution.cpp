#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int p;
    cin >> p;
    p--;

    int s = arr[p];

    bool u = true;
    int l = 0;

    for (int i = 0; i < p; i++)
    {
        if (arr[i] != s && u)
        {
            l++;
            u = false;
        }
        else if (arr[i] == s)
        {
            u = true;
        }
    }

    u = true;
    int r = 0;

    for (int i = p; i < n; i++)
    {
        if (arr[i] != s && u)
        {
            r++;
            u = false;
        }
        else if (arr[i] == s)
        {
            u = true;
        }
    }

    cout << 2 * max(l, r) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}