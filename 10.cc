#include <iostream>
#include <cmath>

using namespace std;

float f(int x, int y){
    return pow(x, y);
}

float doubleINt(int xl, int x2, int yl, int y2){
    return (y2 - yl) * (x2- xl) * (f(xl, yl) + f(xl, y2) + f(x2, y2) + f(x2, yl))/4.0;  //formula..
}

int main(){
    int xl, x2, yl, y2;
    cout << "Enter x limits (xl, x2): ";
    cin >> xl>> x2;
    cout << "Enter y limits (yl, y2): ";
    cin >> yl >> y2;

    cout << "I= "<< doubleINt(xl, x2, yl, y2);
    return 0;
}