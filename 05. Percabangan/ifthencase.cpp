#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 1 && n < 10){
        cout << "satuan" << endl;
    }
    else if (n >= 10 && n < 100){
        cout << "puluhan" << endl;
    }
    else if (n >= 100 && n < 1000){
        cout << "ratusan" << endl;
    }
    else if (n >= 1000 && n < 10000){
        cout << "ribuan" << endl;
    }
    else if (n >= 10000 && n < 100000){
        cout << "puluhribuan" << endl;
    }
}