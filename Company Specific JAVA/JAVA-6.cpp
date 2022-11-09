#include <bits/stdc++.h>

using namespace std;
double sum(int x, int n)
{
    double i, total = 1.0, multi = x;

    for (i = 1; i < n; i++)
    {

        total = total + multi;
        multi = multi * x;
    }

    cout << "\n";
    return total;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << sum(x, n + 1) - 1;
    return 0;
}