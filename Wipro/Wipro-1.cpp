#include <iostream>
using namespace std;
int main()
{

    int arr[1000];
    int calc[4] = {0};
    int n, max = 0, idx, noOfRooms = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        calc[arr[i]]++;
        if (calc[arr[i]] > max)
        {
            max = calc[arr[i]]; // keeping track of the maximum rooms with a type of paint
            idx = arr[i];       // index of the place which has majority
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i != idx)
            noOfRooms += calc[i];
    }

    cout << "Minimum no. of rooms to be painted: " << noOfRooms;
    return 0;
}