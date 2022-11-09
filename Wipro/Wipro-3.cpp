#include <iostream>
using namespace std;
int main()
{

    int prices[1000];
    int n, noOfPieces, max = 0, idx, price;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> prices[i];
        if (n % i == 0)
        {
            noOfPieces = n / i;
            price = noOfPieces * prices[i];
            if (price > max)
            {
                max = price;
                idx = i;
            }
        }
    }
    cout << "Maximum price from selling pieces: " << max;
}