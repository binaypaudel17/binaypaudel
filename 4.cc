#include <iostream>
#include <cmath>
#define e 2.718

using namespace std;

float f(int x){
    return pow(e, -x);
}

float Simpson(int l, int u){
    float k= (u -l)/2.0;
    return k * (f(l) + 4 * f(l + k) + f(u))/3.0;
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