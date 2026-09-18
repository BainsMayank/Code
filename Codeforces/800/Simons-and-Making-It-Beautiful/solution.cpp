#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] > vec[mx])
        {
            mx = i;
        }
    }
    swap(vec[mx], vec[0]);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
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