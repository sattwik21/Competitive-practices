#include <iostream>
#include <math.h>

using namespace std;

int main() {
    string players;
    string ones = "1111111", zeros = "0000000";

    getline(cin,players);

    int found0 = players.find(zeros);
    int found1 = players.find(ones);


    if(found0 >= 0 || found1 >= 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}