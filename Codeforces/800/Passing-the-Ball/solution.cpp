#include <iostream>
#include <vector>
using namespace std;

int solve()
{
    int n;
    cin >> n;

    vector<char> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'R')
            count++;
        else
            break;
    }

    return count + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
    return 0;
}