#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, k = 2;
    bool isPrime;

    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> i;
        isPrime = true;
        for (j = 2; j <= trunc((i)/2); j++) {
            if (i % j == 0) {
                k += 1;
                if ( k > 4) {
                    isPrime = false; break;
                }
            }
        }
        if (isPrime == true){
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
        k = 2;
    }
    return 0;
}