#include <iostream>
using namespace std;

int main() {
    int i, n, k, s = 0;
    cin >> k;

    for (i = 1; i <= k; i++){
        cin >> n;
        s += n;
    }
    cout << s << endl;
    return 0;
}