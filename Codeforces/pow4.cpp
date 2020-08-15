#include <iostream>
#include <math.h>

using namespace std;

int main() {
    signed int n;
    float x,temp;

    cin >> n;
    
    x = log(n) / log(4);

    temp = x - (int)x ;
    if(temp == 0) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}