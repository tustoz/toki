#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

float a, t;

int main(int argc, char *argv[]) {
    cin>>a>>t;
    cout<<setprecision(2)<<fixed<<a*t/2<<endl;
}