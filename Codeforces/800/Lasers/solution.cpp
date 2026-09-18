#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m, x, y = 0;
    vector<int> horLasers;
    vector<int> verLasers;
    cin >> n >> m >> x >> y;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        horLasers.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        verLasers.push_back(x);
    }
    cout << n + m << '\n';
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