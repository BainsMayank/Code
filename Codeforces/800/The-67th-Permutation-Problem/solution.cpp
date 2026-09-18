#include <vector>
#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> grp(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        grp[i][0] = i + 1;
    }

    int curr = 3 * n;
    for (int i = n - 1; i >= 0; i--)
    {
        grp[i][2] = curr;
        grp[i][1] = curr - 1;
        curr -= 2;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << grp[i][j] << " ";
        }
    }
    cout << '\n';
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