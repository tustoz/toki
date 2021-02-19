#include <iostream>
using namespace std;

int main(){
    int n, s;
    cin >> n;

    while(n % 2 == 0){
        n = n / 2;
    } if (n == 1){
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    }
}