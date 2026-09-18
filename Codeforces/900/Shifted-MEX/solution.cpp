#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    int best = 0, curr = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0 || arr[i] != arr[i - 1] + 1)
            curr = 0;

        curr++;
        best = max(best, curr);
    }

    cout << best << '\n';
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