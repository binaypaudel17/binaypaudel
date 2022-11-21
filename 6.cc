#include <iostream>
#include <cmath>
#define e 2.718

using namespace std;

float f(int x){
    return pow(e, -x);
}

float Simpson(int l, int u){
    float k = (u -l)/3.0;
    return 3 * k * (f(l) + 3* f(l + k) + 3 * f(l + 2*k) + f(u))/8.0;
}

int main(){
    int l, u;

    cout << "Enter lower bound: ";
    cin >> l;
    cout << "Enter upper bound: ";
    cin >> u;

    cout << "I: "<< Simpson(l, u);

    return 0;
}