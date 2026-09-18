#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> list;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        list.push_back(x);
    }

    if (n == 1)
    {
        cout << 1 << "\n";
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 2 << "\n";
    }
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