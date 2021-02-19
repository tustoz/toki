#include <iostream>
using namespace std;

int main(){
    int n, i, a[100], min, max;
    cin >> n;

    for (i = 1; i <= n; i++){
        cin >> a[i];
    }

    min = a[1];
    max = a[1];

    for (i = 1; i <= n; i++){
        if (max < a[i]){
            max = a[i];
        }
        if (min > a[i]){
            min = a[i];
        }
    }
    cout << max << " " << min << endl;
}