#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string cubes;
    string name;
    cin >> cubes >> name;
    sort(cubes.begin(), cubes.end());
    sort(name.begin(), name.end());
    if (name == cubes)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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