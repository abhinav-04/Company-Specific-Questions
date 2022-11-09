#include <iostream>

using namespace std;

int findType(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 1)
        {
            // factors found, add to sum
            i += num;
        }
    }
    if (sum > num)
    {
        return -1;
    }
    else if (sum < num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num, result;
    cin >> num;
    result = findType(num);

    if (result == 1)
        cout << num << " is a deficient number";

    else if (result == -1)
        cout << num << " is a abundant number";

    else
        cout << num << " is a perfect number";

    cout << endl;
    return 0;
}