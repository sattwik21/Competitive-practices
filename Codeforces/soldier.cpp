#include <iostream>

using namespace std;

int main() {
    int k,n,w,i,sum = 0,b;

    cin >> k >> n >> w;

    for(i=1;i<=w;i++) {
        sum = sum + i*k;
    }

    b = sum - n;

    if(b > 0) {
        cout << b;
    } else {
        cout << "0";
    }
    return 0;
}