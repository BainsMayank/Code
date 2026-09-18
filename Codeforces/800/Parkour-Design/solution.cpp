#include <iostream>
using namespace std;

void solve()
{
    int x, y;
    int xi = 0, yi = 0;
    cin >> x >> y;

    if (y > yi)
    {
        while (y > yi)
        {
            xi += 2;
            yi += 1;
        }
        if (xi > x)
        {
            cout << "NO\n";
            return;
        }
        else if (xi == x)
        {
            cout << "YES\n";
            return;
        }
        else if ((x - xi) % 3 == 0)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }

    if (y < yi)
    {
        while (y < yi)
        {
            xi += 4;
            yi -= 1;
        }
        if (xi > x)
        {
            cout << "NO\n";
            return;
        }
        else if (xi == x)
        {
            cout << "YES\n";
            return;
        }
        else if ((x - xi) % 3 == 0)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }

    // case: y == yi (i.e., y == 0)
    if (xi > x)
    {
        cout << "NO\n";
        return;
    }
    else if (xi == x)
    {
        cout << "YES\n";
        return;
    }
    else if ((x - xi) % 3 == 0)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        cout << "NO\n";
        return;
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