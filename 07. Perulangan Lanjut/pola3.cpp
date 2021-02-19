#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l, n = -1;
    cin >> i;

    for (j = 1; j <= i; j++)
    {
        for (k = 1; k <= j; k++)
        {
            n += 1;
            if (n == 10)
            {
                n = 0;
            }
            cout << n;
        }
        cout << endl;
    }
    return 0;
}