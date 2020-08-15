#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n,k,a[51],i,count = 0;
    cin >> n >> k;
    
    for(i=1;i<=n;i++) {
        cin >> a[i];
    }

    for(i=1;i<=n;i++) {
        if(a[i] == 0 && a[k] == 0){
            continue;
        }else if(a[i] >= a[k]) {
            count = count + 1;
        } else {
            continue;
        }
    }

    cout << count;
    return 0;
}