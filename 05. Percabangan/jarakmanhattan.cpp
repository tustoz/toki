#include <iostream>
using namespace std;

int main() {
    int x, x1, x2, y, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    x = x1 - x2;
    y = y1 - y2;

    if (x < 0){
        x = -x;
    }
    if ( y < 0){
        y = -y;
    }

    cout << x + y << endl;
    return 0;
}