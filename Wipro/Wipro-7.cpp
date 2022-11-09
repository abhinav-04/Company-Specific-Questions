#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int hours[100], vNo[100];
    float price[100];
    for (int i = 0; i < n; i++)
    {
        cin >> vNo[i];
        cin >> hours[i];
        if (hours[i] <= 3)
            price[i] = 30;

        else if (hours[i] != 24)
            price[i] = (hours[i] - 3) * 5 + 30;

        else
            price[i] = 80;
    }
    for (int i = 0; i < n; i++)
    {
        cout << vNo[i] << " " << hours[i] << " " << setprecision(2) << price[i] << endl;
    }
}