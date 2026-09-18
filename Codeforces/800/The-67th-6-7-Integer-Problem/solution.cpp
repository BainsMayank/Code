#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    vector<int> nums;
    for (int i = 0; i < 7; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < 6; i++)
    {
        nums[i] *= -1;
    }
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += nums[i];
    }
    cout << sum << '\n';
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