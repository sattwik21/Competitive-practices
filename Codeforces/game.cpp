#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
    int n, p , q , i , k, temp[201], count = 0;
    
    cin >> n;
 
    cin >> p;
    for(i=0;i<p;i++) {
        cin >> temp[i];
    }
 
    cin >> q;
    for(i=p;i<p+q;i++) {
        cin >> temp[i];
    }


    for(i=1;i<=n;i++) {
        for(k=0;k<p+q;k++) {
            if(temp[k] == i) {
                count = count + 1;
                break;
            }
        }
    }    


    if(count == n){
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}