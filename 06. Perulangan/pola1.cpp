#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n, i;
    cin >> n;

    for (i = 1; i < n; i++){
        if (i % 10 == 0){
            cout << i << endl;
        }
        if (i == 42){
            cout << "ERROR" << endl;
        }
    }
    cout<<endl;
    return 0;
}