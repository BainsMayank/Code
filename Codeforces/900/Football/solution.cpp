#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string num;
    cin >> num;

    int count = 1;
    int valid = 0;

    for (int i = 1; i < num.length(); i++)
    {
        if (num[i] == num[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count >= 7)
        {
            valid = 1;
            break;
        }
    }

    if (valid == 1)
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
    solve();
}