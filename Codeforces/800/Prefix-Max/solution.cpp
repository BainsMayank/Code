#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[mx])
        {
            mx = i;
        }
    }

    cout << nums[mx] * n << '\n';
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