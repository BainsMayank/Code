#include <iostream>
using namespace std;

void solve()
{
    long long k = 1;
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        k *= 2;
        while (n % 2 == 0)
        {
            n /= 2;
        }
    }

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            k *= i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }

    if (n > 1)
    {
        k *= n;
    }

    cout << k << '\n';
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