#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int x, n = 0;
    cin >> x >> n;
    if (n % 2 == 0)
    {
        cout << "0\n";
    }
    else
    {
        cout << x << '\n';
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