#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string out = "A";
    for (int i = 0; i < n; i++)
    {
        cout << out << endl;
        out = alphabet[1 + i] + out;
    }
}