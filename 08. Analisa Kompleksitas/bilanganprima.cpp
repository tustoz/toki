#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, k;
    cin >> n;

    for (i = 0; i < n; i++) {
        bool cek = false;
        cin >> k;
            for (j = 2; j * j <= k; j++) {
                if (k % j == 0){
                    cek = true;
                    break;
                } else continue;
                } if (cek == false) {
                    cout << "YA";
                } else {
                    cout << "BUKAN";
                }
                cout << endl;
            }
}