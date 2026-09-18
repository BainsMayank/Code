#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m;
    long long h;
    cin >> n >> m >> h;

    vector<long long> a(n), cur(n), inc(n, 0);
    vector<bool> used_flag(n, false);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cur[i] = a[i];
    }

    vector<int> used;

    while (m--)
    {
        int b;
        long long c;
        cin >> b >> c;

        int idx = b - 1;

        if (!used_flag[idx])
        {
            used.push_back(idx);
            used_flag[idx] = true;
        }

        cur[idx] += c;
        inc[idx] += c;

        if (cur[idx] > h)
        {
            for (int x : used)
            {
                cur[x] = a[x];
                inc[x] = 0;
                used_flag[x] = false;
            }
            used.clear();
        }
    }

    for (int i = 0; i < n; i++)
        cout << cur[i] << " ";

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}