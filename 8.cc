#include <iostream>
#include <cmath>

using namespace std;

float f(float  x){
    return pow(x+3, 4) + 1;
}

float twoPoint(){
    float x1, x2, y1, y2;
    x1 = -1.0/sqrt(3);
    x2 = -x1;
    y1 = y2 = 1;

    return (w1 * f(x1) + w2 * f(x2));
}

float threePoint(){
    float x1, x2, x3, y1, y2, y3;
    x1 = -sqrt(3.0/5.0);
    x3 = -x1;
    x2 = 0;
    y1= y3 = 5.0/9.0;
    y2 = 8.0/9.0;

    return (y1* f(x1) + y2* f(x2) + y3* f(x3));

}

int main(){
    

    cout << "I [Two point]: " << twoPoint()<< "\nI [three point]: "<< threePoint();
    return 0;
}