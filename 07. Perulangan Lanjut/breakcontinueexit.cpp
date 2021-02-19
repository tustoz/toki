#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;

    for (i = 1; i <= n; i++){
        if (i % 10 == 0){
            continue;
        }
        if (i > 41){
            cout << "ERROR" << endl;
            break;
        } else {
            cout<< i << endl;
        }
    }
    return 0;
}