#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string players;
    int i,len = players.length(), count = 0, op = 0;

    getline(cin,players);

    for(i=0;i<len;i++) {
        if(players[i] == '1') {
            count = count + 1;
            if(count > op) {
                op = op + 1;
            } else {
                count = 0;
            }
        } 
    }
   
    cout << op;
   if(op >= 7) {
       cout << "YES";
   } else {
       cout << "NO";
   }
    
    return 0;
}