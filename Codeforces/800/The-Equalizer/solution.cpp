#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    int k;
    cin >> n >> k;
    int sum = 0;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    bool notPoss = false;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    if (sum % 2 != 0 || (n * k) % 2 == 0)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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