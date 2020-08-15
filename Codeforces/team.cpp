#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,i=0,count = 0,solve = 0;
    cin >> n;
    int r1,r2,r3;
    while(i<n) {
        cin >> r1 >> r2 >> r3;
        if(r1 == 1 || r2 == 1 || r3 == 1) {
            count = count + 1;
        } else {
            continue;
        }

        if(count >=2 ) {
            solve = solve + 1;
        }
        i++;
    }
    cout << solve;
    return 0;
}
