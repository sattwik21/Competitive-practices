#include <iostream>
#include <string>

int main() {
    int t,i;

    cin >> t;
    char username[10];
    // Entering an array of names
    for(i=0;i<t;i++){
        getline(cin,username[i]);
    }
    for(i=0;i<t;i++) {
        cout << username[i];
    }
    return 0;
}